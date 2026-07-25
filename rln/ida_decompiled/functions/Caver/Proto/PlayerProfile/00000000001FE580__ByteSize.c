/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE580
 * Mangled: ._ZNK5Caver5Proto13PlayerProfile8ByteSizeEv
 * Demangled: Caver::Proto::PlayerProfile::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002EB24C  Caver::Proto::PlayerProfile::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE588 string=0x00000000001FE58C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PlayerProfile::ByteSize(Caver::Proto::PlayerProfile *this)
{
  return _ZNK5Caver5Proto13PlayerProfile8ByteSizeEv(this);
}

