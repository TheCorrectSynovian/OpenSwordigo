/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CC84
 * Mangled: _ZdaPv
 * Demangled: operator delete[](void *)
 *
 * Callers: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x000000000051CC84 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall operator delete[](void *a1)
{
  operator delete(a1);
}

