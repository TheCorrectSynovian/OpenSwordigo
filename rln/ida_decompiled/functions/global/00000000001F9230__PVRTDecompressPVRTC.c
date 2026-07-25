/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9230
 * Mangled: ._Z19PVRTDecompressPVRTCPKviiiPh
 * Demangled: PVRTDecompressPVRTC(void const*,int,int,int,uchar *)
 *
 * Callers: 1
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 1
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9238 string=0x00000000001F923C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall PVRTDecompressPVRTC(const void *a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  JUMPOUT(0x519794);
}

