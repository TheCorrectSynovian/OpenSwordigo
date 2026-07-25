/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6960
 * Mangled: ._ZN5Caver8GameData18EntityClassForNameERKSs
 * Demangled: Caver::GameData::EntityClassForName(std::string const&)
 *
 * Callers: 1
 *   0x000000000026EED8  Caver::EntityInfoComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000003B1210  Caver::GameData::EntityClassForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6968 string=0x00000000001F696C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameData::EntityClassForName()
{
  return _ZN5Caver8GameData18EntityClassForNameERKSs();
}

