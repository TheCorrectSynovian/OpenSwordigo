/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F904
 * Mangled: sub_51F904
 * Demangled: sub_51F904
 *
 * Callers: 2
 *   0x000000000055D7DC  sub_55D7DC
 *   0x000000000055D88C  sub_55D88C
 *
 * Callees: 6
 *   0x00000000001F4200  .lseek
 *   0x00000000001FA0F0  .poll
 *   0x00000000001FE3F0  .ioctl
 *   0x0000000000200220  .fstat
 *   0x0000000000202CF0  .fileno
 *   0x000000000051F664  sub_51F664
 *
 * Referenced strings: 12
 *   insn=0x000000000051F91C string=0x000000000051F920 "a"
 *   insn=0x000000000051F948 string=0x000000000051F94C "F"
 *   insn=0x000000000051F950 string=0x000000000051F954 "#"
 *   insn=0x000000000051F954 string=0x000000000051F958 "!"
 *   insn=0x000000000051F968 string=0x00000000001FA0F0 "0'"
 *   insn=0x000000000051F96C string=0x000000000051F970 "m"
 *   insn=0x000000000051F978 string=0x000000000051F97C ":"
 *   insn=0x000000000051F980 string=0x000000000051F984 "'"
 *   insn=0x000000000051F9B0 string=0x000000000051F9B4 ","
 *   insn=0x000000000051F9B8 string=0x000000000051F9BC """
 *   insn=0x000000000051F9C0 string=0x000000000051F9C4 "`"
 *   insn=0x000000000051F9C0 string=0x00000000001F4200 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_51F904(FILE **a1)
{
  FILE *v2; // x0
  int v3; // w0
  int v5; // w0
  FILE **v6; // x0
  __int64 v7; // x19
  int v8; // w0
  int v9; // [xsp+24h] [xbp+24h] BYREF
  pollfd fds; // [xsp+28h] [xbp+28h] BYREF
  _BYTE v11[16]; // [xsp+30h] [xbp+30h] BYREF
  int v12; // [xsp+40h] [xbp+40h]
  __int64 v13; // [xsp+60h] [xbp+60h]

  v2 = *a1;
  v9 = 0;
  v3 = fileno(v2);
  if ( !ioctl(v3, 0x541Bu, &v9) && (v9 & 0x80000000) == 0 )
    return v9;
  fds.fd = sub_51F664(a1);
  fds.events = 1;
  if ( poll(&fds, 1u, 0) <= 0 )
    return 0;
  v5 = sub_51F664(a1);
  if ( fstat(v5, (struct stat *)v11) || (v12 & 0xF000) != 0x8000 )
    return 0;
  v6 = a1;
  v7 = v13;
  v8 = sub_51F664(v6);
  return v7 - lseek(v8, 0, 1);
}

