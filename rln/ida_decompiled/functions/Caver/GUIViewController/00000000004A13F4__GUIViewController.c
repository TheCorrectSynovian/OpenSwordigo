/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A13F4
 * Mangled: _ZN5Caver17GUIViewControllerC2Ev
 * Demangled: Caver::GUIViewController::GUIViewController(void)
 *
 * Callers: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004A13F4 string=0x00000000004A13F8 "!@"
 *   insn=0x00000000004A1404 string=0x00000000004A1408 "A"
 *   insn=0x00000000004A1408 string=0x00000000004A140C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIViewController::GUIViewController(_QWORD *this)
{
  this[3] = 0;
  this[4] = 0;
  this[1] = 0;
  this[2] = 0;
  this[7] = 0;
  this[8] = 0;
  *this = off_6D6930;
  this[6] = 0;
  return this;
}

