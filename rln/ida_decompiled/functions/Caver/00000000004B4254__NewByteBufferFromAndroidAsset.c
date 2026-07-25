/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4254
 * Mangled: _ZN5Caver29NewByteBufferFromAndroidAssetERKSsPj
 * Demangled: Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *
 * Callers: 1
 *   0x00000000001F4D80  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FAF40  .AAsset_read
 *   0x00000000001FE2F0  .AAsset_getLength
 *   0x00000000002002F0  .AAssetManager_open
 *   0x0000000000201240  .AAsset_close
 *
 * Referenced strings: 9
 *   insn=0x00000000004B4264 string=0x00000000004B4268 ""
 *   insn=0x00000000004B4268 string=0x00000000004B426C "\t"
 *   insn=0x00000000004B4298 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004B42A8 string=0x00000000004B42AC "%"
 *   insn=0x00000000004B42AC string=0x00000000001FAF40 "0'"
 *   insn=0x00000000004B42B8 string=0x00000000004B42BC "v"
 *   insn=0x00000000004B42BC string=0x00000000004B42C0 ""
 *   insn=0x00000000004B42D4 string=0x00000000004B42D8 """
 *   insn=0x00000000004B42D8 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::NewByteBufferFromAndroidAsset(const char **a1, _DWORD *a2)
{
  AAsset *v3; // x0
  AAsset *v4; // x21
  off_t Length; // x22
  void *v6; // x20

  v3 = AAssetManager_open((AAssetManager *)qword_6E9F58, *a1, 2);
  v4 = v3;
  if ( v3 )
  {
    Length = AAsset_getLength(v3);
    v6 = (void *)operator new[](Length);
    if ( AAsset_read(v4, v6, Length) < 0 )
    {
      *a2 = 0;
      operator delete[](v6);
      return 0;
    }
    else
    {
      AAsset_close(v4);
      *a2 = Length;
    }
  }
  else
  {
    v6 = 0;
    *a2 = 0;
  }
  return v6;
}

