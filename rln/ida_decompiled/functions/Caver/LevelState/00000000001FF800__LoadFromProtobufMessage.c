/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF800
 * Mangled: ._ZN5Caver10LevelState23LoadFromProtobufMessageERKNS_5Proto10LevelStateE
 * Demangled: Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *
 * Callers: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000003BAB78  Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF808 string=0x00000000001FF80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LevelState::LoadFromProtobufMessage(
        Caver::LevelState *this,
        const Caver::Proto::LevelState *a2)
{
  return _ZN5Caver10LevelState23LoadFromProtobufMessageERKNS_5Proto10LevelStateE(this, a2);
}

