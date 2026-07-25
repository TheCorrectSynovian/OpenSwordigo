/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202CF0
 * Mangled: .fileno
 * Demangled: .fileno
 *
 * Callers: 5
 *   0x000000000051F664  sub_51F664
 *   0x000000000051F714  sub_51F714
 *   0x000000000051F798  sub_51F798
 *   0x000000000051F8B4  sub_51F8B4
 *   0x000000000051F904  sub_51F904
 *
 * Callees: 1
 *   0x00000000006FEC68  fileno
 *
 * Referenced strings: 1
 *   insn=0x0000000000202CF8 string=0x0000000000202CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fileno(FILE *stream)
{
  return fileno(stream);
}

