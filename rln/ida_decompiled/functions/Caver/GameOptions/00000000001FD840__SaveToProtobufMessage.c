/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD840
 * Mangled: ._ZNK5Caver11GameOptions21SaveToProtobufMessageEPNS_5Proto11GameOptionsE
 * Demangled: Caver::GameOptions::SaveToProtobufMessage(Caver::Proto::GameOptions *)
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD848 string=0x00000000001FD84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOptions::SaveToProtobufMessage()
{
  JUMPOUT(0x3B4A9C);
}

