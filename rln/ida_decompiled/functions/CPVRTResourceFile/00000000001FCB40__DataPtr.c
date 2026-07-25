/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB40
 * Mangled: ._ZNK17CPVRTResourceFile7DataPtrEv
 * Demangled: CPVRTResourceFile::DataPtr(void)
 *
 * Callers: 1
 *   0x000000000051906C  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Callees: 1
 *   0x0000000000513DB0  CPVRTResourceFile::DataPtr(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB48 string=0x00000000001FCB4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTResourceFile::DataPtr(CPVRTResourceFile *this)
{
  return _ZNK17CPVRTResourceFile7DataPtrEv(this);
}

