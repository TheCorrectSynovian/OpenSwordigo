/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201260
 * Mangled: ._Z28PVRTTextureLoadFromPVRBufferPKvmPjS0_bjPiS2_
 * Demangled: PVRTTextureLoadFromPVRBuffer(void const*,ulong,uint *,void const*,bool,uint,int *,int *)
 *
 * Callers: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201268 string=0x000000000020126C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall PVRTTextureLoadFromPVRBuffer(
        const void *a1,
        unsigned __int64 a2,
        unsigned int *a3,
        const void *a4,
        bool a5,
        unsigned int a6,
        int *a7,
        int *a8)
{
  JUMPOUT(0x5196C4);
}

