

# Tools

VERILATOR = verilator
VDIR = obj_dir
CPPFLAGS = -I$(VDIR) `pkg-config --cflags verilator`
CXXFLAGS = -Wall -Werror -std=c++17
CXX = g++
LD = g++

# Testbench

SRC = testbench.cpp

OBJS = testbench.o

EXE = testbench

# top module name

TOP = top

# Verilator elements

VSRC = cluster_clock_gating.sv            \
       dp_ram.sv                          \
       ram.sv                             \
       top.sv                             \
       ../include/apu_core_package.sv     \
       ../include/riscv_defines.sv        \
       ../include/riscv_tracer_defines.sv \
       ../riscv_alu.sv                    \
       ../riscv_alu_basic.sv              \
       ../riscv_alu_div.sv                \
       ../riscv_compressed_decoder.sv     \
       ../riscv_controller.sv             \
       ../riscv_cs_registers.sv           \
       ../riscv_debug_unit.sv             \
       ../riscv_decoder.sv                \
       ../riscv_int_controller.sv         \
       ../riscv_ex_stage.sv               \
       ../riscv_hwloop_controller.sv      \
       ../riscv_hwloop_regs.sv            \
       ../riscv_id_stage.sv               \
       ../riscv_if_stage.sv               \
       ../riscv_load_store_unit.sv        \
       ../riscv_mult.sv                   \
       ../riscv_prefetch_buffer.sv        \
       ../riscv_prefetch_L0_buffer.sv     \
       ../riscv_register_file.sv          \
       ../riscv_core.sv                   \
       ../riscv_apu_disp.sv               \
       ../riscv_L0_buffer.sv

VINC = ../include

VOBJS = $(VDIR)/verilated.o       \
        $(VDIR)/verilated_vcd_c.o

VLIB = $(VDIR)/V$(TOP)__ALL.a

VSMK = V$(TOP).mk
VMK  = $(VDIR)/$(VSMK)

# Build the executable

$(EXE): $(VLIB) $(VOBJS) $(OBJS)
	$(LD) -o $@ $(OBJS) $(VLIB) $(VOBJS)

$(VOBJS): $(VMK)
	for f in $@; \
	do \
		sf=$$(basename $$f); \
		$(MAKE) -C $(VDIR) -f $(VSMK) $$sf; \
	done

$(VLIB): $(VMK)
	make -C $(VDIR) -f V$(TOP).mk

$(VDIR)/$(TOP): $(VDIR) $(VMK)
	$(MAKE) -C $(VDIR) -f $(VSMK)

$(VDIR):
	mkdir -p $@

$(VMK): $(VSRC)
	verilator -O3 -CFLAGS "-O3 -g3 -std=gnu++11" \
                  -Wno-CASEINCOMPLETE -Wno-LITENDIAN -Wno-UNOPT \
	          -Wno-UNOPTFLAT -Wno-WIDTH -Wno-fatal --top-module top \
	          --Mdir $(VDIR) --trace -DPULP_FPGA_EMUL -cc \
	          +incdir+$(VINC) $(VSRC) $(SRC) --exe

.PHONY: clean
clean:
	$(RM) -r $(VDIR)
	$(RM) $(EXE) $(OBJS)
