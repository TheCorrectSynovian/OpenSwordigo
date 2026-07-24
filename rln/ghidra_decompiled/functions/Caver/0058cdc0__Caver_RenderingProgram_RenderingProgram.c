/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058cdc0
 * Function: Caver::RenderingProgram::RenderingProgram
 * Signature: undefined __thiscall RenderingProgram(RenderingProgram * this, RenderingContext * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgram::RenderingProgram(Caver::RenderingContext*, std::string const&) */

void __thiscall
Caver::RenderingProgram::RenderingProgram
          (RenderingProgram *this,RenderingContext *param_1,string *param_2)

{
  *(RenderingContext **)this = param_1;
  FUN_0066a528(this + 8,param_2);
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (RenderingProgram)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0xffffffffffffffff;
                    /* try { // try from 0058ce14 to 0068ce1f has its CatchHandler @ 0058bfd8 */
  return;
}


