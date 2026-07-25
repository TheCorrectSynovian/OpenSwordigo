/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE790
 * Mangled: ._ZN5Caver16RenderingContext17SetCurrentContextEPS0_
 * Demangled: Caver::RenderingContext::SetCurrentContext(Caver::RenderingContext*)
 *
 * Callers: 2
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *   0x00000000004788B8  Java_com_touchfoo_swordigo_Native_handleApplicationQuit
 *
 * Callees: 1
 *   0x000000000048AFA4  Caver::RenderingContext::SetCurrentContext(Caver::RenderingContext*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE798 string=0x00000000001FE79C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetCurrentContext(
        Caver::RenderingContext *this,
        Caver::RenderingContext *a2)
{
  return _ZN5Caver16RenderingContext17SetCurrentContextEPS0_(this, a2);
}

