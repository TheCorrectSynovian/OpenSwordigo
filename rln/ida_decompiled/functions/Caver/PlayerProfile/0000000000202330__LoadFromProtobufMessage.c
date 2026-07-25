/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202330
 * Mangled: ._ZN5Caver13PlayerProfile23LoadFromProtobufMessageERKNS_5Proto13PlayerProfileEb
 * Demangled: Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *
 * Callers: 1
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000003C173C  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202338 string=0x000000000020233C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::LoadFromProtobufMessage(
        Caver::PlayerProfile *this,
        const Caver::Proto::PlayerProfile *a2,
        bool a3)
{
  return _ZN5Caver13PlayerProfile23LoadFromProtobufMessageERKNS_5Proto13PlayerProfileEb(this, a2, a3);
}

