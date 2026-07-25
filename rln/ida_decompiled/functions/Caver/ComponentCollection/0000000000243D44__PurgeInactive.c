/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243D44
 * Mangled: _ZN5Caver19ComponentCollection13PurgeInactiveEv
 * Demangled: Caver::ComponentCollection::PurgeInactive(void)
 *
 * Callers: 1
 *   0x0000000000201520  Caver::ComponentCollection::PurgeInactive(void)
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000243D54 string=0x0000000000243D58 "u"@"
 *   insn=0x0000000000243D68 string=0x0000000000243D6C ")"
 *   insn=0x0000000000243D70 string=0x0000000000243D74 ")"
 *   insn=0x0000000000243D74 string=0x0000000000243D78 "i"
 *   insn=0x0000000000243D7C string=0x0000000000243D80 "+"
 *   insn=0x0000000000243D84 string=0x0000000000243D88 "?"
 *   insn=0x0000000000243D88 string=0x0000000000243D8C "@"
 *   insn=0x0000000000243D8C string=0x0000000000243D90 "\t"
 *   insn=0x0000000000243D8C string=0x0000000000243DF4 "\t!"
 *   insn=0x0000000000243D90 string=0x0000000000243D94 "?"
 *   insn=0x0000000000243D98 string=0x0000000000243D9C "("
 *   insn=0x0000000000243DA8 string=0x0000000000243DAC "\t\t@"
 *   insn=0x0000000000243DAC string=0x0000000000243DB0 ")"
 *   insn=0x0000000000243DB0 string=0x0000000000243DB4 "\t\t"
 *   insn=0x0000000000243DC0 string=0x0000000000243DC4 "@"
 *   insn=0x0000000000243DC4 string=0x0000000000243DC8 ""
 *   insn=0x0000000000243DC8 string=0x0000000000243DCC ""
 *   insn=0x0000000000243DD0 string=0x0000000000243DD4 ""
 *   insn=0x0000000000243DD4 string=0x0000000000243DD8 ""
 *   insn=0x0000000000243DEC string=0x0000000000243DF0 "h"
 *   insn=0x0000000000243DF4 string=0x0000000000243DF8 "i"
 *   insn=0x0000000000243E00 string=0x0000000000243E04 "@"
 *   insn=0x0000000000243E04 string=0x0000000000243E08 ""
 *   insn=0x0000000000243E08 string=0x0000000000243E0C ""
 *   insn=0x0000000000243E0C string=0x0000000000243E10 "`"
 *   insn=0x0000000000243E10 string=0x0000000000243E1C ""
 *   insn=0x0000000000243E1C string=0x0000000000243E20 ""
 *   insn=0x0000000000243E24 string=0x0000000000243E28 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ComponentCollection::PurgeInactive(_QWORD *this)
{
  _QWORD *v1; // x19
  char *v2; // x8
  char *v3; // x21
  char *v4; // x20
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x22
  __int64 v8; // x8
  _DWORD *v9; // x0
  int v10; // w8
  char *v11; // x9
  int v12; // w8

  v1 = this;
  v3 = (char *)*this;
  v2 = (char *)this[1];
  if ( (char *)*this != v2 )
  {
    v4 = (char *)*this;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
      if ( v5 && *(_BYTE *)(v5 + 240) )
      {
        v4 = v3 + 8;
      }
      else
      {
        if ( v3 + 8 != v2 )
        {
          v6 = v2 - (v3 + 8);
          if ( v6 >= 1 )
          {
            v7 = ((unsigned __int64)v6 >> 3) + 1;
            do
            {
              v8 = *((_QWORD *)v3 + 1);
              if ( v8 )
                ++*(_DWORD *)(v8 + 8);
              v9 = *(_DWORD **)v3;
              *(_QWORD *)v3 = v8;
              if ( v9 )
              {
                v10 = v9[2] - 1;
                v9[2] = v10;
                if ( !v10 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
              }
              --v7;
              v3 += 8;
            }
            while ( v7 > 1 );
            v2 = (char *)v1[1];
          }
        }
        v11 = v2 - 8;
        v1[1] = v2 - 8;
        this = (_QWORD *)*((_QWORD *)v2 - 1);
        if ( this && (v12 = *((_DWORD *)this + 2) - 1, (*((_DWORD *)this + 2) = v12) == 0) )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 8LL))(this);
          v2 = (char *)v1[1];
        }
        else
        {
          v2 = v11;
        }
      }
      v3 = v4;
    }
    while ( v4 != v2 );
  }
  return this;
}

