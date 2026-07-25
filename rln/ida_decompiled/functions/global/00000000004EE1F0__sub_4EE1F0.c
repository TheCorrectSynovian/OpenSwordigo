/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE1F0
 * Mangled: sub_4EE1F0
 * Demangled: sub_4EE1F0
 *
 * Callers: 1
 *   0x00000000004E9C58  lua_gc(lua_State *,int,int)
 *
 * Callees: 2
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004EE294  sub_4EE294
 *
 * Referenced strings: 7
 *   insn=0x00000000004EE1FC string=0x00000000004EE200 "t"
 *   insn=0x00000000004EE208 string=0x00000000004EE20C "H"
 *   insn=0x00000000004EE25C string=0x00000000004EE260 "j"
 *   insn=0x00000000004EE26C string=0x00000000004EE270 ""
 *   insn=0x00000000004EE274 string=0x00000000004EE278 "}"
 *   insn=0x00000000004EE278 string=0x00000000004EE27C ""
 *   insn=0x00000000004EE27C string=0x00000000004EE280 "}\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE1F0(__int64 a1)
{
  __int64 v2; // x20
  unsigned int v3; // w8
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(unsigned __int8 *)(v2 + 33);
  if ( v3 > 1 )
    goto LABEL_4;
  *(_DWORD *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 48) = v2 + 40;
  *(_QWORD *)(v2 + 56) = 0;
  *(_BYTE *)(v2 + 33) = 2;
  do
  {
    sub_4EDD78(a1);
    v3 = *(unsigned __int8 *)(v2 + 33);
LABEL_4:
    ;
  }
  while ( v3 != 4 );
  for ( result = sub_4EE294(a1); *(_BYTE *)(v2 + 33); result = sub_4EDD78(a1) )
    ;
  *(_QWORD *)(v2 + 112) = *(_QWORD *)(v2 + 128) / 0x64uLL * *(int *)(v2 + 144);
  return result;
}

