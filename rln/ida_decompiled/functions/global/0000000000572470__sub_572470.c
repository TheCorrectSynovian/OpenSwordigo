/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572470
 * Mangled: sub_572470
 * Demangled: sub_572470
 *
 * Callers: 2
 *   0x0000000000572470  sub_572470
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000057247C string=0x0000000000572480 "t"
 *   insn=0x0000000000572494 string=0x0000000000572498 "`"
 *   insn=0x00000000005724B8 string=0x00000000005724BC "a"
 *   insn=0x00000000005724BC string=0x00000000005724C0 " "
 *   insn=0x00000000005724BC string=0x00000000005724C8 "s\n@"
 *   insn=0x00000000005724C4 string=0x00000000005724E0 "s"
 *   insn=0x00000000005724C4 string=0x00000000005724EC "`"
 *   insn=0x00000000005724C4 string=0x000000000057250C "b"
 *   insn=0x00000000005724C8 string=0x00000000005724CC "s"
 *   insn=0x0000000000572518 string=0x000000000057251C "s\n@"
 *   insn=0x0000000000572530 string=0x0000000000572534 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_572470(__int64 result, _DWORD *a2, __int64 a3)
{
  __int64 v3; // x19
  _DWORD *v4; // x21
  _DWORD *v6; // x2

  v3 = a3;
  v4 = (_DWORD *)result;
  if ( a3 )
  {
    while ( 2 )
    {
      result = (unsigned int)(*(_DWORD *)v3 - 1);
      switch ( *(_DWORD *)v3 )
      {
        case 1:
        case 2:
        case 3:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x25:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x42:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
          goto LABEL_11;
        case 4:
          ++*v4;
          v6 = *(_DWORD **)(v3 + 8);
          goto LABEL_12;
        case 7:
        case 8:
        case 0x32:
          v3 = *(_QWORD *)(v3 + 16);
          if ( v3 )
            continue;
          return result;
        case 0x23:
        case 0x24:
          v6 = *(_DWORD **)(v3 + 8);
          if ( *v6 == 5 )
          {
            ++*a2;
LABEL_11:
            v6 = *(_DWORD **)(v3 + 8);
          }
LABEL_12:
          result = sub_572470(v4, a2, v6);
          v3 = *(_QWORD *)(v3 + 16);
          if ( !v3 )
            return result;
          continue;
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
          v3 = *(_QWORD *)(v3 + 8);
          if ( v3 )
            continue;
          return result;
        default:
          return result;
      }
    }
  }
  return result;
}

