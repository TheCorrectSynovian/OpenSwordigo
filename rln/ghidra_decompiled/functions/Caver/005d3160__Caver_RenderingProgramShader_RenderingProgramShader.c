/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3160
 * Function: Caver::RenderingProgramShader::RenderingProgramShader
 * Signature: undefined __thiscall RenderingProgramShader(RenderingProgramShader * this, RenderingContext * param_1, string * param_2, RenderingProgramShaderType param_3, char * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgramShader::RenderingProgramShader(Caver::RenderingContext*, std::string
   const&, Caver::RenderingProgramShaderType, char const*) */

void __thiscall
Caver::RenderingProgramShader::RenderingProgramShader
          (RenderingProgramShader *this,undefined8 param_1,undefined8 param_2,undefined4 param_4)

{
  *(undefined8 *)this = param_1;
  FUN_0066a528(this + 8,param_2);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x38] = (RenderingProgramShader)0x0;
  return;
}


