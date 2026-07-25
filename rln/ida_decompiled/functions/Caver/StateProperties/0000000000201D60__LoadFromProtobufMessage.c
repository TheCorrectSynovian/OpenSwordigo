/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D60
 * Mangled: ._ZN5Caver15StateProperties23LoadFromProtobufMessageERKNS_5Proto15StatePropertiesE
 * Demangled: Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003BAB78  Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *
 * Callees: 1
 *   0x00000000003C3E38  Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D68 string=0x0000000000201D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StateProperties::LoadFromProtobufMessage(
        Caver::StateProperties *this,
        const Caver::Proto::StateProperties *a2)
{
  return _ZN5Caver15StateProperties23LoadFromProtobufMessageERKNS_5Proto15StatePropertiesE(this, a2);
}

