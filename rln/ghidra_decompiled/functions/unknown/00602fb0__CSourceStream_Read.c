/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602fb0
 * Function: CSourceStream::Read
 * Signature: undefined __thiscall Read(CSourceStream * this, void * param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CSourceStream::Read(void*, unsigned int) */

bool __thiscall CSourceStream::Read(CSourceStream *this,void *param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong __n;
  
  lVar3 = *(long *)(this + 0x10);
  __n = (ulong)param_2;
  uVar2 = CPVRTResourceFile::Size(*(CPVRTResourceFile **)(this + 8));
  bVar1 = lVar3 + __n <= uVar2;
  if (bVar1) {
    lVar3 = CPVRTResourceFile::StringPtr(*(CPVRTResourceFile **)(this + 8));
    memcpy(param_1,(void *)(lVar3 + *(long *)(this + 0x10)),__n);
                    /* try { // try from 00603010 to 0070301b has its CatchHandler @ 00603704 */
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + __n;
  }
  return bVar1;
}


