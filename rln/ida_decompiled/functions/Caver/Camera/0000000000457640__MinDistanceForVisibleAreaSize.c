/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457640
 * Mangled: _ZN5Caver6Camera29MinDistanceForVisibleAreaSizeERKNS_7Vector2E
 * Demangled: Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000201200  Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000001FE5C0  .tanf
 *
 * Referenced strings: 6
 *   insn=0x000000000045765C string=0x0000000000457660 "h"
 *   insn=0x0000000000457668 string=0x000000000045766C "j"
 *   insn=0x000000000045766C string=0x0000000000457670 " \t "
 *   insn=0x0000000000457670 string=0x0000000000457674 ""
 *   insn=0x0000000000457674 string=0x0000000000457678 " "
 *   insn=0x000000000045767C string=0x0000000000457680 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Camera::MinDistanceForVisibleAreaSize(__int64 a1)
{
  tanf(*(float *)(a1 + 244));
  tanf(*(float *)(a1 + 244));
}

