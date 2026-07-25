/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502D48
 * Mangled: _ZN7CSource10ReadMarkerERjS0_
 * Demangled: CSource::ReadMarker(uint &,uint &)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 6
 *   insn=0x0000000000502D58 string=0x0000000000502D5C "V"
 *   insn=0x0000000000502D7C string=0x0000000000502D80 "\t@"
 *   insn=0x0000000000502DA0 string=0x0000000000502DA4 "\t@"
 *   insn=0x0000000000502DB4 string=0x0000000000502DB8 "h"
 *   insn=0x0000000000502DD0 string=0x0000000000502DE8 ":"
 *   insn=0x0000000000502DE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CSource::ReadMarker(CSource *this, unsigned int *a2, unsigned int *a3)
{
  __int64 result; // x0
  unsigned int v7; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v8; // [xsp+8h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(CSource *, unsigned int *, __int64))(*(_QWORD *)this + 16LL))(this, &v7, 4) & 1) == 0 )
    return 0;
  *a2 = v7;
  if ( ((*(__int64 (__fastcall **)(CSource *, unsigned int *, __int64))(*(_QWORD *)this + 16LL))(this, &v7, 4) & 1) == 0 )
    return 0;
  result = 1;
  *a3 = v7;
  return result;
}

