

package apu_core_package;

   /////////////////////////////////////////////////////////////////////////////
   //  IMPORTANT!!                                                            //
   /////////////////////////////////////////////////////////////////////////////
   // THESE PARAMETERS HAVE TO MATCH THE ones in ulpcluster/apu_package.sv    //
   /////////////////////////////////////////////////////////////////////////////

   // by default set to 0
   parameter SHARED_INT_MULT   = 0;

   // CPU side / general params
   parameter NARGS_CPU     = 3;
   parameter WOP_CPU       = 6;
   parameter NUSFLAGS_CPU  = 5;
   parameter NDSFLAGS_CPU  = 15;
   /////////////////////////////////////////////////////////////////////////////
   // until here                                                              //
   /////////////////////////////////////////////////////////////////////////////

   // FP-general
   parameter APU_FLAGS_FP = 2;

   // DSP-Mult
   parameter PIPE_REG_DSP_MULT  = 1;
   parameter APU_FLAGS_DSP_MULT = 0;

   // Int-Mult
   parameter APU_FLAGS_INT_MULT = 1;
   
   // Int-div
      
   // addsub
   parameter PIPE_REG_ADDSUB  = 1;
         
   // mult
   parameter PIPE_REG_MULT = 1;
   
   // casts
   parameter PIPE_REG_CAST = 1;
   
   // mac
   parameter PIPE_REG_MAC = 2;
   
   // div
   parameter PIPE_REG_DIV = 4;
   
   // sqrt
   parameter PIPE_REG_SQRT = 5;

   // iter divsqrt
   
endpackage // apu_core_package
