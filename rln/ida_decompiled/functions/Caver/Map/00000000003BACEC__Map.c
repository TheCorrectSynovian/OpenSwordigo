/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BACEC
 * Mangled: _ZN5Caver3MapC2Ev
 * Demangled: Caver::Map::Map(void)
 *
 * Callers: 2
 *   0x00000000001FB840  Caver::Map::Map(void)
 *   0x00000000003BAC00  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000003BACFC string=0x00000000003BAD00 ""
 *   insn=0x00000000003BAD0C string=0x00000000003BAD10 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Map::Map(_QWORD *this)
{
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = this + 4;
  this[7] = this + 4;
  this[8] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = this + 10;
  this[13] = this + 10;
  this[14] = 0;
  return this;
}

