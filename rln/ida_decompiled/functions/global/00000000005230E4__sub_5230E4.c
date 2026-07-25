/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005230E4
 * Mangled: sub_5230E4
 * Demangled: sub_5230E4
 *
 * Callers: 10
 *   0x000000000052304C  sub_52304C
 *   0x00000000005230E4  sub_5230E4
 *   0x0000000000523408  sub_523408
 *   0x00000000005236B8  sub_5236B8
 *   0x0000000000523F08  sub_523F08
 *   0x0000000000524C20  sub_524C20
 *   0x0000000000525138  sub_525138
 *   0x0000000000525888  sub_525888
 *   0x0000000000528E58  sub_528E58
 *   0x000000000056F6C8  sub_56F6C8
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x0000000000523408  sub_523408
 *   0x000000000053F778  sub_53F778
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 76
 *   insn=0x00000000005230E8 string=0x00000000005230EC "#"
 *   insn=0x00000000005230F4 string=0x00000000005230F8 "c"
 *   insn=0x00000000005230F8 string=0x00000000005230FC "V"
 *   insn=0x0000000000523100 string=0x0000000000523104 "#"
 *   insn=0x0000000000523104 string=0x0000000000523108 "s @"
 *   insn=0x0000000000523108 string=0x000000000052310C "S"
 *   insn=0x0000000000523110 string=0x0000000000523114 "`l@"
 *   insn=0x000000000052311C string=0x0000000000523174 "V"
 *   insn=0x000000000052312C string=0x0000000000523130 "V"
 *   insn=0x0000000000523130 string=0x0000000000523134 "s @"
 *   insn=0x0000000000523130 string=0x0000000000523178 "`"
 *   insn=0x0000000000523138 string=0x000000000052313C " "
 *   insn=0x0000000000523154 string=0x0000000000523158 "!"
 *   insn=0x000000000052315C string=0x0000000000523160 "!"
 *   insn=0x000000000052317C string=0x0000000000523180 "st@"
 *   insn=0x0000000000523180 string=0x0000000000523184 "`\n@"
 *   insn=0x0000000000523184 string=0x0000000000523188 "a"
 *   insn=0x0000000000523190 string=0x0000000000523194 "vx@"
 *   insn=0x0000000000523190 string=0x0000000000523224 "a"
 *   insn=0x00000000005231A4 string=0x00000000005231A8 " h`8@"
 *   insn=0x00000000005231A8 string=0x00000000005231AC "@"
 *   insn=0x00000000005231AC string=0x00000000005231B0 "b\n@"
 *   insn=0x00000000005231B0 string=0x00000000005231B4 "`"
 *   insn=0x00000000005231B4 string=0x00000000005231B8 "_"
 *   insn=0x00000000005231BC string=0x00000000005231C0 "B"
 *   insn=0x00000000005231BC string=0x00000000005231F4 "a"
 *   insn=0x00000000005231C0 string=0x00000000005231C4 "b\n"
 *   insn=0x00000000005231C4 string=0x00000000005231C8 "_"
 *   insn=0x00000000005231C8 string=0x00000000005231CC "B"
 *   insn=0x00000000005231CC string=0x00000000005231D0 "@"
 *   insn=0x00000000005231CC string=0x0000000000523254 "a"
 *   insn=0x00000000005231D8 string=0x00000000005231DC " h`8"
 *   insn=0x00000000005231F8 string=0x00000000005231FC "!(@"
 *   insn=0x00000000005231FC string=0x0000000000523200 " "
 *   insn=0x0000000000523204 string=0x0000000000523208 "A"
 *   insn=0x0000000000523208 string=0x0000000000523270 "b\n@"
 *   insn=0x0000000000523214 string=0x0000000000523218 "s @"
 *   insn=0x0000000000523218 string=0x000000000052321C "A"
 *   insn=0x0000000000523228 string=0x000000000052322C "!$@"
 *   insn=0x000000000052322C string=0x0000000000523230 " "
 *   insn=0x0000000000523234 string=0x0000000000523238 "#"
 *   insn=0x000000000052323C string=0x0000000000523240 "vx@"
 *   insn=0x0000000000523258 string=0x000000000052325C "!$@"
 *   insn=0x000000000052325C string=0x0000000000523260 " "
 *   insn=0x0000000000523264 string=0x0000000000523268 " "
 *   insn=0x0000000000523270 string=0x0000000000523274 "`"
 *   insn=0x00000000005232A4 string=0x00000000005232A8 " "
 *   insn=0x00000000005232A8 string=0x00000000005232AC "`"
 *   insn=0x00000000005232B4 string=0x00000000005232B8 "e"
 *   insn=0x00000000005232EC string=0x00000000005232F0 "j"
 *   insn=0x00000000005232FC string=0x0000000000523300 "!"
 *   insn=0x0000000000523308 string=0x000000000052333C "`"
 *   insn=0x0000000000523320 string=0x0000000000523324 "-"
 *   insn=0x000000000052332C string=0x0000000000523330 "!"
 *   insn=0x0000000000523340 string=0x0000000000523344 "b"
 *   insn=0x0000000000523348 string=0x000000000052334C "B @"
 *   insn=0x000000000052334C string=0x0000000000523350 "!"
 *   insn=0x0000000000523350 string=0x0000000000523354 "0"
 *   insn=0x000000000052337C string=0x0000000000523380 "a"
 *   insn=0x0000000000523384 string=0x0000000000523388 "`"
 *   insn=0x0000000000523384 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000052338C string=0x0000000000523390 "s"
 *   insn=0x0000000000523390 string=0x0000000000523394 "`"@"
 *   insn=0x0000000000523394 string=0x0000000000523398 "a"
 *   insn=0x000000000052339C string=0x00000000005233A0 "`""
 *   insn=0x00000000005233A0 string=0x00000000005233A4 "a"
 *   insn=0x00000000005233AC string=0x00000000005233B0 "`"
 *   insn=0x00000000005233B4 string=0x00000000005233B8 "`"
 *   insn=0x00000000005233C0 string=0x00000000005233C4 "!"
 *   insn=0x00000000005233C8 string=0x00000000005233CC "B"
 *   insn=0x00000000005233CC string=0x00000000005233D0 "ph"
 *   insn=0x00000000005233D0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005233E0 string=0x00000000005233E4 "kh"
 *   insn=0x00000000005233E8 string=0x00000000005233EC "6y"
 *   insn=0x00000000005233F8 string=0x00000000005233FC "eh"
 *   insn=0x0000000000523400 string=0x0000000000523404 "0y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5230E4(_BYTE *a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v3; // x3
  int v4; // w22
  __int64 v5; // x3
  unsigned int v6; // w19
  void *v8; // x0
  __int64 result; // x0
  int v11; // w1
  _QWORD *v12; // x19
  unsigned __int8 *v13; // x0
  __int64 v14; // x22
  __int64 v15; // x0
  unsigned __int64 v16; // x2
  unsigned __int64 v17; // x0
  _BYTE *v18; // x2
  int v19; // w0

  v3 = *(_QWORD *)(*a2 - 24LL);
  v4 = a3;
  *a1 = 0;
  v5 = (__int64)a2 + v3;
  v6 = *(_DWORD *)(v5 + 32);
  if ( !v6 )
  {
    v8 = *(void **)(v5 + 216);
    if ( v8 )
    {
      sub_53F778(v8);
      v5 = (__int64)a2 + *(_QWORD *)(*a2 - 24LL);
      if ( v4 )
        goto LABEL_4;
    }
    else if ( a3 )
    {
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(v5 + 24) & 0x1000) == 0 )
    {
LABEL_4:
      v6 = *(_DWORD *)(v5 + 32);
      if ( !v6 )
      {
LABEL_5:
        result = 1;
        *a1 = 1;
        return result;
      }
      goto LABEL_6;
    }
    v12 = *(_QWORD **)(v5 + 232);
    v13 = (unsigned __int8 *)v12[2];
    if ( (unsigned __int64)v13 >= v12[3] )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(*v12 + 72LL))(*(_QWORD *)(v5 + 232));
      v5 = (__int64)a2 + *(_QWORD *)(*a2 - 24LL);
      v14 = *(_QWORD *)(v5 + 240);
      if ( v14 )
      {
        if ( (_DWORD)v15 == -1 )
        {
LABEL_21:
          v6 = *(_DWORD *)(v5 + 32);
          v11 = 2;
          return sub_520C14(v5, v11 | 4 | v6);
        }
        goto LABEL_12;
      }
    }
    else
    {
      v14 = *(_QWORD *)(v5 + 240);
      v15 = *v13;
      if ( v14 )
      {
LABEL_12:
        if ( (*(_BYTE *)(*(_QWORD *)(v14 + 48) + (unsigned __int8)v15) & 8) != 0 )
        {
          while ( 1 )
          {
            v16 = v12[2];
            v17 = v12[3];
            if ( v16 >= v17 )
            {
              if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v12 + 80LL))(v12) == -1 )
                goto LABEL_20;
              v18 = (_BYTE *)v12[2];
              v17 = v12[3];
            }
            else
            {
              v18 = (_BYTE *)(v16 + 1);
              v12[2] = v18;
            }
            if ( (unsigned __int64)v18 >= v17 )
            {
              v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 72LL))(v12);
              if ( v19 == -1 )
              {
LABEL_20:
                v5 = (__int64)a2 + *(_QWORD *)(*a2 - 24LL);
                goto LABEL_21;
              }
            }
            else
            {
              LOBYTE(v19) = *v18;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v14 + 48) + (unsigned __int8)v19) & 8) == 0 )
            {
              v5 = (__int64)a2 + *(_QWORD *)(*a2 - 24LL);
              goto LABEL_4;
            }
          }
        }
        goto LABEL_4;
      }
    }
    sub_5652C8(v15);
  }
LABEL_6:
  v11 = 0;
  return sub_520C14(v5, v11 | 4 | v6);
}

