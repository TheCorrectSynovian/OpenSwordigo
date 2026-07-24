/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603024
 * Function: CSourceStream::Skip
 * Signature: undefined __thiscall Skip(CSourceStream * this, uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CSourceStream::Skip(unsigned int) */

bool __thiscall CSourceStream::Skip(CSourceStream *this,uint param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x10);
                    /* try { // try from 0060303c to 00703063 has its CatchHandler @ 00603504 */
  uVar3 = CPVRTResourceFile::Size(*(CPVRTResourceFile **)(this + 8));
  bVar1 = lVar2 + (ulong)param_1 <= uVar3;
  if (bVar1) {
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)param_1;
  }
  return bVar1;
}


