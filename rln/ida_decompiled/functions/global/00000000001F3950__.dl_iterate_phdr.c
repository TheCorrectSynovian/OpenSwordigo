/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3950
 * Mangled: .dl_iterate_phdr
 * Demangled: .dl_iterate_phdr
 *
 * Callers: 1
 *   0x0000000000583248  sub_583248
 *
 * Callees: 1
 *   0x00000000006FE5B8  dl_iterate_phdr
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3958 string=0x00000000001F395C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int dl_iterate_phdr(int (*callback)(struct dl_phdr_info *, size_t, void *), void *data)
{
  return dl_iterate_phdr(callback, data);
}

