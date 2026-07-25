/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050CD84
 * Mangled: _Z24PVRTModelPODReorderFacesR8SPODMeshiii
 * Demangled: PVRTModelPODReorderFaces(SPODMesh &,int,int,int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5370  PVRTVertexWrite(void *,EPVRTDataType,uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA910  PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *
 * Referenced strings: 33
 *   insn=0x000000000050CDA0 string=0x000000000050CDA4 "W"
 *   insn=0x000000000050CDB0 string=0x000000000050CDB4 "h"
 *   insn=0x000000000050CDB8 string=0x000000000050CDBC "i"
 *   insn=0x000000000050CDBC string=0x000000000050CDC0 "?"
 *   insn=0x000000000050CDC0 string=0x000000000050CDC4 " "
 *   insn=0x000000000050CDC8 string=0x000000000050CDCC "9|@"
 *   insn=0x000000000050CDCC string=0x000000000050CDD0 "Z|@"
 *   insn=0x000000000050CDD0 string=0x000000000050CDD4 "{|@"
 *   insn=0x000000000050CDE4 string=0x000000000050CDF0 "i"
 *   insn=0x000000000050CDF0 string=0x000000000050CDF4 "b"
 *   insn=0x000000000050CDFC string=0x000000000050CE00 ")}\n"
 *   insn=0x000000000050CE0C string=0x000000000050CE10 "h"
 *   insn=0x000000000050CE0C string=0x00000000001FA910 "0'"
 *   insn=0x000000000050CE10 string=0x000000000050CE14 "b"
 *   insn=0x000000000050CE20 string=0x000000000050CE24 "h"
 *   insn=0x000000000050CE24 string=0x000000000050CE28 "b"
 *   insn=0x000000000050CE2C string=0x000000000050CE30 "y"
 *   insn=0x000000000050CE38 string=0x000000000050CE3C "a"
 *   insn=0x000000000050CE44 string=0x000000000050CE48 "J"
 *   insn=0x000000000050CE48 string=0x000000000050CE4C "h"
 *   insn=0x000000000050CE48 string=0x00000000001F5370 "P'"
 *   insn=0x000000000050CE4C string=0x000000000050CE50 "a"
 *   insn=0x000000000050CE58 string=0x000000000050CE5C "E"
 *   insn=0x000000000050CE5C string=0x000000000050CE60 "h"
 *   insn=0x000000000050CE60 string=0x000000000050CE64 "a"
 *   insn=0x000000000050CE68 string=0x000000000050CE6C "y"
 *   insn=0x000000000050CE70 string=0x000000000050CE74 "?"
 *   insn=0x000000000050CE74 string=0x000000000050CE78 "h"
 *   insn=0x000000000050CE78 string=0x000000000050CE7C ""
 *   insn=0x000000000050CE80 string=0x000000000050CE84 "#"
 *   insn=0x000000000050CE84 string=0x000000000050CDE8 "h"
 *   insn=0x000000000050CE90 string=0x000000000050CE94 "!"
 *   insn=0x000000000050CEB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODReorderFaces(__int64 result)
{
  __int64 v1; // x19
  unsigned int i; // w28

  v1 = result;
  _ReadStatusReg(TPIDR_EL0);
  if ( *(_QWORD *)(result + 32) && 3 * *(_DWORD *)(result + 4) )
  {
    for ( i = 3; ; i += 3 )
    {
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexWrite();
      PVRTVertexWrite();
      result = PVRTVertexWrite();
      if ( i >= 3 * *(_DWORD *)(v1 + 4) )
        break;
    }
  }
  return result;
}

