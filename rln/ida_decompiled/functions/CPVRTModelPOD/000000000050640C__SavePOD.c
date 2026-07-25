/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050640C
 * Mangled: _ZN13CPVRTModelPOD7SavePODEPKcS1_S1_
 * Demangled: CPVRTModelPOD::SavePOD(char const*,char const*,char const*)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FDDC0  .fclose
 *   0x0000000000201180  .fopen
 *   0x0000000000506484  sub_506484
 *
 * Referenced strings: 4
 *   insn=0x000000000050641C string=0x000000000059B624 "wb+"
 *   insn=0x0000000000506434 string=0x0000000000506438 "R"
 *   insn=0x000000000050645C string=0x0000000000506460 "X"
 *   insn=0x0000000000506460 string=0x00000000001FDDC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall CPVRTModelPOD::SavePOD(CPVRTModelPOD *this, const char *filename, const char *a3, const char *a4)
{
  FILE *v4; // x0
  FILE *v5; // x22
  char v6; // w19

  v4 = fopen(filename, "wb+");
  v5 = v4;
  if ( !v4 )
    return 1;
  v6 = sub_506484(v4);
  fclose(v5);
  return (v6 & 1) == 0;
}

