/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D6540
 * Mangled: _ZN5Caver24OpenAAssetFileDescriptorERKSs
 * Demangled: Caver::OpenAAssetFileDescriptor(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F4200  .lseek
 *   0x00000000001F4CB0  .AAsset_openFileDescriptor
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDBA0  Caver::GetAndroidAssetManager(void)
 *   0x00000000002002F0  .AAssetManager_open
 *   0x0000000000201240  .AAsset_close
 *
 * Referenced strings: 9
 *   insn=0x00000000004D6550 string=0x00000000004D6554 "U"
 *   insn=0x00000000004D6564 string=0x00000000004D6568 "a"
 *   insn=0x00000000004D6564 string=0x00000000001FDBA0 "0'"
 *   insn=0x00000000004D656C string=0x00000000004D6570 "`"
 *   insn=0x00000000004D6588 string=0x00000000001F4CB0 "P'"
 *   insn=0x00000000004D6590 string=0x00000000004D6594 "+"
 *   insn=0x00000000004D65A8 string=0x00000000001F4200 "P'"
 *   insn=0x00000000004D65C0 string=0x00000000004D65DC "="
 *   insn=0x00000000004D65DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OpenAAssetFileDescriptor(Caver *a1)
{
  AAssetManager *AndroidAssetManager; // x0
  AAsset *v3; // x0
  AAsset *v4; // x20
  unsigned int v5; // w19
  off_t outLength; // [xsp+8h] [xbp-38h] BYREF
  off_t outStart[2]; // [xsp+10h] [xbp-30h] BYREF

  outStart[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  AndroidAssetManager = (AAssetManager *)Caver::GetAndroidAssetManager(a1);
  v3 = AAssetManager_open(AndroidAssetManager, *(const char **)a1, 2);
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = AAsset_openFileDescriptor(v3, outStart, &outLength);
  AAsset_close(v4);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  else
    lseek(v5, outStart[0], 0);
  return v5;
}

