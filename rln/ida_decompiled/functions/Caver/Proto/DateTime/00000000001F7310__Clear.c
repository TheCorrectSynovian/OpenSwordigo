/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7310
 * Mangled: ._ZN5Caver5Proto8DateTime5ClearEv
 * Demangled: Caver::Proto::DateTime::Clear(void)
 *
 * Callers: 1
 *   0x00000000002EA15C  Caver::Proto::PlayerProfile::Clear(void)
 *
 * Callees: 1
 *   0x00000000002CDEB0  Caver::Proto::DateTime::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7314 string=0x00000000002CDEB0 "`@9H"
 *   insn=0x00000000001F7318 string=0x00000000001F731C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DateTime::Clear(Caver::Proto::DateTime *this)
{
  return _ZN5Caver5Proto8DateTime5ClearEv(this);
}

