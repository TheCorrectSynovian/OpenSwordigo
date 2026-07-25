/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005128B0
 * Mangled: sub_5128B0
 * Demangled: sub_5128B0
 *
 * Callers: 1
 *   0x0000000000510538  sub_510538
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6770  .calloc
 *
 * Referenced strings: 48
 *   insn=0x00000000005128CC string=0x00000000005128D0 "X"
 *   insn=0x00000000005128D0 string=0x00000000005128D4 ""
 *   insn=0x00000000005128F4 string=0x00000000005128F8 "\t@"
 *   insn=0x0000000000512904 string=0x0000000000512908 "["
 *   insn=0x0000000000512908 string=0x000000000059B5EC "ts"
 *   insn=0x0000000000512910 string=0x0000000000512914 "{"
 *   insn=0x0000000000512928 string=0x000000000051292C "\t@"
 *   insn=0x0000000000512934 string=0x0000000000512938 "`"
 *   insn=0x0000000000512944 string=0x0000000000512948 "h"
 *   insn=0x0000000000512950 string=0x0000000000512954 "h{"
 *   insn=0x0000000000512954 string=0x0000000000512958 ""
 *   insn=0x000000000051296C string=0x0000000000512970 "\t@"
 *   insn=0x0000000000512974 string=0x0000000000512978 "`"
 *   insn=0x0000000000512994 string=0x0000000000512998 "\t@"
 *   insn=0x000000000051299C string=0x00000000005129A0 " "
 *   insn=0x00000000005129B8 string=0x00000000005129BC "h"
 *   insn=0x00000000005129CC string=0x0000000000512AC4 "\t"
 *   insn=0x00000000005129D0 string=0x00000000005129D4 "6"
 *   insn=0x00000000005129DC string=0x00000000005129E0 "d"
 *   insn=0x00000000005129E0 string=0x00000000001F6770 "0'"
 *   insn=0x00000000005129E8 string=0x0000000000512BC8 ""
 *   insn=0x0000000000512A04 string=0x0000000000512A08 "\t@"
 *   insn=0x0000000000512A30 string=0x0000000000512A34 "!"
 *   insn=0x0000000000512A34 string=0x0000000000512A38 "M"
 *   insn=0x0000000000512A48 string=0x0000000000512A4C "\t@"
 *   insn=0x0000000000512A5C string=0x0000000000512A60 "R"
 *   insn=0x0000000000512A6C string=0x0000000000512A70 "@"
 *   insn=0x0000000000512A78 string=0x0000000000512A7C "R"
 *   insn=0x0000000000512A8C string=0x0000000000512A90 "\t@"
 *   insn=0x0000000000512A94 string=0x0000000000512A98 "`\t"
 *   insn=0x0000000000512AA8 string=0x0000000000512AAC ""
 *   insn=0x0000000000512AAC string=0x0000000000512AB0 "("
 *   insn=0x0000000000512AB0 string=0x0000000000512AB4 "H"
 *   insn=0x0000000000512AB4 string=0x0000000000512AB8 ""
 *   insn=0x0000000000512ABC string=0x0000000000512AC0 ":"
 *   insn=0x0000000000512ACC string=0x0000000000512AD0 "\t"
 *   insn=0x0000000000512AD8 string=0x0000000000512ADC "v"
 *   insn=0x0000000000512AE4 string=0x0000000000512AE8 """
 *   insn=0x0000000000512AF4 string=0x0000000000512AF8 "4"
 *   insn=0x0000000000512B30 string=0x0000000000512B34 "\t@"
 *   insn=0x0000000000512B44 string=0x0000000000512B48 "\t]"
 *   insn=0x0000000000512B6C string=0x0000000000512B70 "|"
 *   insn=0x0000000000512B80 string=0x0000000000512B84 "\t"
 *   insn=0x0000000000512B98 string=0x0000000000512B9C ")\t@"
 *   insn=0x0000000000512B9C string=0x0000000000512BA0 " "
 *   insn=0x0000000000512BB4 string=0x0000000000512BB8 "\t@"
 *   insn=0x0000000000512BD0 string=0x0000000000512BD4 "a"
 *   insn=0x0000000000512C00 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_5128B0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v8; // w25
  unsigned int v9; // w19
  unsigned int v10; // w22
  int v11; // w8
  size_t v12; // x22
  _DWORD *result; // x0
  _DWORD *v14; // x19
  int v15; // w28
  unsigned int *v16; // x23
  int v17; // w8
  _DWORD *v18; // x8
  size_t v19; // x22
  _WORD *v20; // x23
  int v21; // w8
  int v22; // [xsp+Ch] [xbp-64h]
  unsigned int item_count; // [xsp+10h] [xbp-60h] BYREF
  _BYTE item_count_4[4]; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v25; // [xsp+18h] [xbp-58h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4) & 1) == 0 )
    return 0;
  v8 = a3 | 0x80000000;
  while ( 1 )
  {
    v9 = item_count;
    if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4) & 1) == 0 )
      return 0;
    if ( v9 == v8 )
      return &dword_0 + 1;
    v10 = item_count;
    switch ( v9 )
    {
      case 0x2328u:
        if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4)
            & 1) == 0 )
          return 0;
        *(_DWORD *)a1 = item_count;
        goto LABEL_45;
      case 0x2329u:
        if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4)
            & 1) == 0 )
          return 0;
        *(_DWORD *)(a1 + 4) = item_count;
        goto LABEL_45;
      case 0x232Au:
        if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4)
            & 1) == 0 )
          return 0;
        *(_DWORD *)(a1 + 8) = item_count;
        goto LABEL_45;
      case 0x232Bu:
        if ( (a4 & 1) != 0 )
        {
          if ( *(_DWORD *)a1 > 0xEu )
            goto LABEL_45;
          v11 = 1 << *(_DWORD *)a1;
          if ( (v11 & 0x3F6) != 0 )
          {
            v12 = item_count >> 2;
            if ( (_DWORD)v12 )
            {
              result = calloc(v12, 4u);
              v14 = result;
              if ( !result )
                return result;
              v22 = a4;
              v15 = 1;
              v16 = result;
              do
              {
                if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(
                        a2,
                        &item_count,
                        4)
                    & 1) != 0 )
                {
                  *v16 = item_count;
                  v17 = 1;
                }
                else
                {
                  v17 = 0;
                }
                v15 &= v17;
                --v12;
                ++v16;
              }
              while ( v12 );
LABEL_39:
              a4 = v22;
              if ( !v15 )
                return 0;
LABEL_42:
              *(_QWORD *)(a1 + 16) = v14;
              goto LABEL_45;
            }
LABEL_41:
            v14 = 0;
            goto LABEL_42;
          }
          if ( (v11 & 0x1808) != 0 )
          {
            v19 = item_count >> 1;
            if ( (_DWORD)v19 )
            {
              result = calloc(v19, 2u);
              if ( !result )
                return result;
              v22 = a4;
              v15 = 1;
              v14 = result;
              v20 = result;
              do
              {
                if ( ((*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a2, item_count_4, 2)
                    & 1) != 0 )
                {
                  v21 = 1;
                  *v20 = item_count_4[0] | (item_count_4[1] << 8);
                }
                else
                {
                  v21 = 0;
                }
                v15 &= v21;
                --v19;
                ++v20;
              }
              while ( v19 );
              goto LABEL_39;
            }
            goto LABEL_41;
          }
          if ( (v11 & 0x6400) != 0 )
          {
            if ( item_count )
            {
              result = calloc(item_count, 1u);
              v18 = result;
              *(_QWORD *)(a1 + 16) = result;
              if ( !result )
                return result;
            }
            else
            {
              v18 = *(_DWORD **)(a1 + 16);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v18, v10) & 1) == 0 )
              return 0;
          }
        }
        else
        {
          if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4)
              & 1) == 0 )
            return 0;
          *(_QWORD *)(a1 + 16) = ((unsigned __int64)HIBYTE(item_count) << 24)
                               | ((unsigned __int64)BYTE2(item_count) << 16)
                               | ((unsigned __int64)BYTE1(item_count) << 8)
                               | (unsigned __int8)item_count;
        }
LABEL_45:
        if ( ((*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &item_count, 4)
            & 1) == 0 )
          return 0;
        break;
      default:
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, item_count) & 1) == 0 )
          return 0;
        goto LABEL_45;
    }
  }
}

