/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4118
 * Mangled: sub_4F4118
 * Demangled: sub_4F4118
 *
 * Callers: 5
 *   0x00000000004E8B94  lua_rawget(lua_State *,int)
 *   0x00000000004F3A60  sub_4F3A60
 *   0x00000000004F4320  sub_4F4320
 *   0x00000000004F43C0  sub_4F43C0
 *   0x00000000004F6020  sub_4F6020
 *
 * Callees: 1
 *   0x00000000004EEE84  sub_4EEE84
 *
 * Referenced strings: 75
 *   insn=0x00000000004F4128 string=0x00000000004F412C "h\n@"
 *   insn=0x00000000004F4130 string=0x00000000004F4134 "H"
 *   insn=0x00000000004F4134 string=0x00000000004F4138 ")"
 *   insn=0x00000000004F4134 string=0x00000000004F417C ",@9j"
 *   insn=0x00000000004F4138 string=0x00000000004F4140 "(y"
 *   insn=0x00000000004F4140 string=0x00000000004F4144 "4"
 *   insn=0x00000000004F4144 string=0x00000000004F414C ""
 *   insn=0x00000000004F4150 string=0x00000000004F4154 ",@9j"
 *   insn=0x00000000004F4150 string=0x00000000004F41D0 "a"
 *   insn=0x00000000004F4150 string=0x00000000004F4200 "h"
 *   insn=0x00000000004F4154 string=0x00000000004F4158 "j"
 *   insn=0x00000000004F4158 string=0x00000000004F415C "\t"
 *   insn=0x00000000004F4160 string=0x00000000004F4164 "h!"
 *   insn=0x00000000004F4164 string=0x00000000004F4168 ""
 *   insn=0x00000000004F4168 string=0x00000000004F416C ""
 *   insn=0x00000000004F416C string=0x00000000004F4170 "\n"
 *   insn=0x00000000004F4178 string=0x00000000004F41A8 "5"
 *   insn=0x00000000004F417C string=0x00000000004F4180 "j"
 *   insn=0x00000000004F4184 string=0x00000000004F4188 "\t"
 *   insn=0x00000000004F4188 string=0x00000000004F418C "h!"
 *   insn=0x00000000004F418C string=0x00000000004F4190 ""
 *   insn=0x00000000004F4190 string=0x00000000004F4194 ""
 *   insn=0x00000000004F4194 string=0x00000000004F4198 "K\t"
 *   insn=0x00000000004F4198 string=0x00000000004F419C "h"
 *   insn=0x00000000004F419C string=0x00000000004F41A0 "\n"
 *   insn=0x00000000004F41B4 string=0x00000000004F41B8 "3"
 *   insn=0x00000000004F41B8 string=0x00000000004EEE84 "@"
 *   insn=0x00000000004F41C0 string=0x00000000004F41C4 "t"
 *   insn=0x00000000004F41C8 string=0x00000000004F41CC "P"
 *   insn=0x00000000004F41D0 string=0x00000000004F41D4 "("
 *   insn=0x00000000004F41D8 string=0x00000000004F41DC "  `"
 *   insn=0x00000000004F41E0 string=0x00000000004F41E4 "\n8@"
 *   insn=0x00000000004F41E0 string=0x00000000004F4258 "( `"
 *   insn=0x00000000004F41E4 string=0x00000000004F41E8 "\t"
 *   insn=0x00000000004F41E8 string=0x00000000004F41EC "?"
 *   insn=0x00000000004F41F0 string=0x00000000004F41F4 ""
 *   insn=0x00000000004F41F8 string=0x00000000004F41FC "D"
 *   insn=0x00000000004F4200 string=0x00000000004F4204 "\n,@9\t"
 *   insn=0x00000000004F4204 string=0x00000000004F4208 "\t"
 *   insn=0x00000000004F4210 string=0x00000000004F4214 "j!"
 *   insn=0x00000000004F4214 string=0x00000000004F4218 "J"
 *   insn=0x00000000004F4218 string=0x00000000004F421C ""
 *   insn=0x00000000004F421C string=0x00000000004F4220 "J"
 *   insn=0x00000000004F4220 string=0x00000000004F4224 "T%-"
 *   insn=0x00000000004F4224 string=0x00000000004F4228 ")"
 *   insn=0x00000000004F4230 string=0x00000000004F4234 "_"
 *   insn=0x00000000004F423C string=0x00000000004F4240 "_"
 *   insn=0x00000000004F4240 string=0x00000000004F4244 "@"
 *   insn=0x00000000004F4248 string=0x00000000004F424C "4"
 *   insn=0x00000000004F4250 string=0x00000000004F4254 "."
 *   insn=0x00000000004F4258 string=0x00000000004F425C "A"
 *   insn=0x00000000004F425C string=0x00000000004F42A4 "\n,@9("
 *   insn=0x00000000004F4268 string=0x00000000004F426C "\n,@9"
 *   insn=0x00000000004F426C string=0x00000000004F4270 ""
 *   insn=0x00000000004F4270 string=0x00000000004F4274 "\t"
 *   insn=0x00000000004F4278 string=0x00000000004F427C "("
 *   insn=0x00000000004F4280 string=0x00000000004F4284 ""
 *   insn=0x00000000004F4284 string=0x00000000004F4288 ")"
 *   insn=0x00000000004F4288 string=0x00000000004F428C ")"
 *   insn=0x00000000004F428C string=0x00000000004F4290 "\n\t"
 *   insn=0x00000000004F4290 string=0x00000000004F4294 "H"
 *   insn=0x00000000004F4294 string=0x00000000004F4298 "\t"
 *   insn=0x00000000004F42A0 string=0x00000000004F42E0 "("
 *   insn=0x00000000004F42A4 string=0x00000000004F42A8 "("
 *   insn=0x00000000004F42A8 string=0x00000000004F42AC "\t"
 *   insn=0x00000000004F42B0 string=0x00000000004F42B4 "("
 *   insn=0x00000000004F42B8 string=0x00000000004F42BC ""
 *   insn=0x00000000004F42BC string=0x00000000004F42C0 ")"
 *   insn=0x00000000004F42C0 string=0x00000000004F42C4 ")"
 *   insn=0x00000000004F42C4 string=0x00000000004F42C8 "\n\t"
 *   insn=0x00000000004F42C8 string=0x00000000004F42CC "H"
 *   insn=0x00000000004F42CC string=0x00000000004F42D0 "\t"
 *   insn=0x00000000004F42E8 string=0x00000000004F42EC "?"
 *   insn=0x00000000004F42F4 string=0x00000000004F42F8 "  `"
 *   insn=0x00000000004F4300 string=0x00000000004F4304 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F4118(__int64 a1, _DWORD *a2)
{
  __int64 *v3; // x20
  double v4; // d1
  int v5; // w8
  double v6; // d0

  v3 = &qword_599BC8;
  switch ( a2[2] )
  {
    case 0:
      return v3;
    case 1:
      v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 40LL * (((1 << *(_BYTE *)(a1 + 11)) - 1) & *a2));
      goto LABEL_4;
    case 3:
      v4 = *(double *)a2;
      v5 = (int)*(double *)a2;
      v6 = (double)v5;
      if ( *(double *)a2 == (double)v5 )
      {
        if ( (unsigned int)(v5 - 1) < *(_DWORD *)(a1 + 56) )
          return (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * (v5 - 1));
        if ( v5 )
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32)
                         + 40LL * ((HIDWORD(v6) + LODWORD(v6)) % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u)));
        else
          v3 = *(__int64 **)(a1 + 32);
        while ( *((_DWORD *)v3 + 6) != 3 || *((double *)v3 + 2) != v6 )
        {
          v3 = (__int64 *)v3[4];
          if ( !v3 )
            return &qword_599BC8;
        }
      }
      else
      {
        if ( v4 == 0.0 )
          v3 = *(__int64 **)(a1 + 32);
        else
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32)
                         + 40LL * ((HIDWORD(v4) + LODWORD(v4)) % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u)));
        do
        {
LABEL_4:
          if ( sub_4EEE84((_DWORD *)v3 + 4, a2) )
            return v3;
          v3 = (__int64 *)v3[4];
        }
        while ( v3 );
        return &qword_599BC8;
      }
      return v3;
    case 4:
      v3 = (__int64 *)(*(_QWORD *)(a1 + 32)
                     + 40LL * (((1 << *(_BYTE *)(a1 + 11)) - 1) & *(_DWORD *)(*(_QWORD *)a2 + 12LL)));
      break;
    default:
      v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 40LL * (*a2 % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u)));
      goto LABEL_4;
  }
  while ( *((_DWORD *)v3 + 6) != 4 || v3[2] != *(_QWORD *)a2 )
  {
    v3 = (__int64 *)v3[4];
    if ( !v3 )
      return &qword_599BC8;
  }
  return v3;
}

