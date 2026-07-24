/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602e70
 * Function: CSourceStream::Init
 * Signature: undefined __thiscall Init(CSourceStream * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CSourceStream::Init(char const*) */

undefined8 __thiscall CSourceStream::Init(CSourceStream *this,char *param_1)

{
  CPVRTResourceFile *this_00;
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  this_00 = operator_new(0x20);
  CPVRTResourceFile::CPVRTResourceFile(this_00,param_1);
  *(CPVRTResourceFile **)(this + 8) = this_00;
                    /* try { // try from 00602ebc to 00702eeb has its CatchHandler @ 00603664 */
  uVar1 = CPVRTResourceFile::IsOpen(this_00);
  if ((uVar1 & 1) == 0) {
    if (*(long **)(this + 8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 8) + 8))();
    }
    uVar2 = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


