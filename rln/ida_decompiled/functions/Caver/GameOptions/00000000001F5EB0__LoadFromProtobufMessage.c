/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5EB0
 * Mangled: ._ZN5Caver11GameOptions23LoadFromProtobufMessageERKNS_5Proto11GameOptionsE
 * Demangled: Caver::GameOptions::LoadFromProtobufMessage(Caver::Proto::GameOptions const&)
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5EB8 string=0x00000000001F5EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOptions::LoadFromProtobufMessage()
{
  JUMPOUT(0x3B4688);
}

