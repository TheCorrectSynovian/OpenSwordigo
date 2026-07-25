/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002010D0
 * Mangled: .strncmp
 * Demangled: .strncmp
 *
 * Callers: 4
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Callees: 1
 *   0x00000000006FEBA0  strncmp
 *
 * Referenced strings: 1
 *   insn=0x00000000002010D8 string=0x00000000002010DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int strncmp(const char *a1, const char *a2, size_t a3)
{
  return strncmp(a1, a2, a3);
}

