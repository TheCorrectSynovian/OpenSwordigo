/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE730
 * Mangled: ._Z34PVRTTextureLoadFromPVRResourceFileR17CPVRTResourceFilePjPKvbjPiS4_
 * Demangled: PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Callers: 1
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Callees: 1
 *   0x000000000051906C  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE738 string=0x00000000001FE73C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTTextureLoadFromPVRResourceFile(
        CPVRTResourceFile *a1,
        unsigned int *a2,
        const void *a3,
        bool a4,
        unsigned int a5,
        int *a6,
        int *a7)
{
  return _Z34PVRTTextureLoadFromPVRResourceFileR17CPVRTResourceFilePjPKvbjPiS4_(a1, a2, a3, a4, a5, a6, a7);
}

