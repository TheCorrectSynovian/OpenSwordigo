/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8010
 * Mangled: ._ZN5Caver14ObjectTemplate22ValueForBindedPropertyEi
 * Demangled: Caver::ObjectTemplate::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000004608A4  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000004608A4  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8018 string=0x00000000001F801C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectTemplate::ValueForBindedProperty(Caver::ObjectTemplate *this, int a2)
{
  return _ZN5Caver14ObjectTemplate22ValueForBindedPropertyEi(this, a2);
}

