/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D23C
 * Mangled: __cxa_get_exception_ptr
 * Demangled: __cxa_get_exception_ptr
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *_cxa_get_exception_ptr(void *a1)
{
  return (void *)*((_QWORD *)a1 - 1);
}

