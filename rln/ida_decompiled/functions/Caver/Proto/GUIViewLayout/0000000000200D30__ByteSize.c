/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D30
 * Mangled: ._ZNK5Caver5Proto13GUIViewLayout8ByteSizeEv
 * Demangled: Caver::Proto::GUIViewLayout::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E6200  Caver::Proto::GameOptions::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D7344  Caver::Proto::GUIViewLayout::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200D38 string=0x0000000000200D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GUIViewLayout::ByteSize(Caver::Proto::GUIViewLayout *this)
{
  return _ZNK5Caver5Proto13GUIViewLayout8ByteSizeEv(this);
}

