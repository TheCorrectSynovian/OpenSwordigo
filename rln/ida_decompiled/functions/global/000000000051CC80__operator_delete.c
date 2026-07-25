/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CC80
 * Mangled: _ZdlPv
 * Demangled: operator delete(void *)
 *
 * Callers: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Callees: 1
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 1
 *   insn=0x000000000051CC80 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void operator delete(void *p)
{
  free(p);
}

