/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000478890
 * Mangled: Java_com_touchfoo_swordigo_Native_reloadContext
 * Demangled: Java_com_touchfoo_swordigo_Native_reloadContext
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 2
 *   0x00000000001F5010  Caver::TextureLibrary::ReloadTextures(bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000478898 string=0x00000000001FA350 "0'"
 *   insn=0x00000000004788A4 string=0x00000000001F5010 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_reloadContext(Caver::TextureLibrary *a1)
{
  Caver::TextureLibrary *v1; // x0

  v1 = (Caver::TextureLibrary *)Caver::TextureLibrary::sharedLibrary(a1);
  return Caver::TextureLibrary::ReloadTextures(v1, 0);
}

