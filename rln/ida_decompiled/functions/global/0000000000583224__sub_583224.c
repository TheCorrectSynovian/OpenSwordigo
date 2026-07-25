/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000583224
 * Mangled: sub_583224
 * Demangled: sub_583224
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F89E0  .free
 *   0x0000000000583220  sub_583220
 *
 * Referenced strings: 1
 *   insn=0x000000000058323C string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_583224(_DWORD *a1)
{
  void *v1; // x0

  if ( *a1 )
  {
    v1 = (void *)sub_583220(a1);
    free(v1);
  }
}

