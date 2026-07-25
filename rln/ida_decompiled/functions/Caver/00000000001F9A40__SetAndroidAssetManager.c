/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A40
 * Mangled: ._ZN5Caver22SetAndroidAssetManagerEP13AAssetManager
 * Demangled: Caver::SetAndroidAssetManager(AAssetManager *)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004B420C  Caver::SetAndroidAssetManager(AAssetManager *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A48 string=0x00000000001F9A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SetAndroidAssetManager(Caver *this, AAssetManager *a2)
{
  return _ZN5Caver22SetAndroidAssetManagerEP13AAssetManager(this, a2);
}

