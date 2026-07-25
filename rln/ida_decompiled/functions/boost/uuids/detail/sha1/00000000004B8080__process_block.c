/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8080
 * Mangled: _ZN5boost5uuids6detail4sha113process_blockEv
 * Demangled: boost::uuids::detail::sha1::process_block(void)
 *
 * Callers: 1
 *   0x00000000001F48C0  boost::uuids::detail::sha1::process_block(void)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 206
 *   insn=0x00000000004B808C string=0x00000000004B8090 "H"
 *   insn=0x00000000004B8090 string=0x00000000004B8094 "\n"
 *   insn=0x00000000004B8094 string=0x00000000004B8098 " "
 *   insn=0x00000000004B80A4 string=0x00000000004B80A8 "*<"
 *   insn=0x00000000004B80A8 string=0x00000000004B80AC "+<"
 *   insn=0x00000000004B80AC string=0x00000000004B80B0 "B"
 *   insn=0x00000000004B80B0 string=0x00000000004B80B4 "*<"
 *   insn=0x00000000004B80B4 string=0x00000000004B80B8 "c"
 *   insn=0x00000000004B80B8 string=0x00000000004B80BC "+<"
 *   insn=0x00000000004B80BC string=0x00000000004B80C0 "D"
 *   insn=0x00000000004B80C0 string=0x00000000004B80C4 "*<\t"
 *   insn=0x00000000004B80C4 string=0x00000000004B80C8 "e"
 *   insn=0x00000000004B80C8 string=0x00000000004B80CC "+<"
 *   insn=0x00000000004B80CC string=0x00000000004B80D0 "B"
 *   insn=0x00000000004B80D0 string=0x00000000004B80D4 "*<"
 *   insn=0x00000000004B80D4 string=0x00000000004B80D8 "C"
 *   insn=0x00000000004B80D8 string=0x00000000004B80DC "*<"
 *   insn=0x00000000004B80DC string=0x00000000004B80E0 "b"
 *   insn=0x00000000004B80E0 string=0x00000000004B80E4 "+<"
 *   insn=0x00000000004B80E4 string=0x00000000004B80E8 "D"
 *   insn=0x00000000004B80E8 string=0x00000000004B80EC "*<"
 *   insn=0x00000000004B80EC string=0x00000000004B80F0 "c"
 *   insn=0x00000000004B80F0 string=0x00000000004B80F4 "+<"
 *   insn=0x00000000004B80F4 string=0x00000000004B80F8 "E"
 *   insn=0x00000000004B80F8 string=0x00000000004B80FC "d"
 *   insn=0x00000000004B80FC string=0x00000000004B8100 "+<"
 *   insn=0x00000000004B8100 string=0x00000000004B8104 "*<"
 *   insn=0x00000000004B8104 string=0x00000000004B8108 "e"
 *   insn=0x00000000004B8108 string=0x00000000004B810C "+<"
 *   insn=0x00000000004B810C string=0x00000000004B8110 "B"
 *   insn=0x00000000004B8110 string=0x00000000004B8114 "*<"
 *   insn=0x00000000004B8114 string=0x00000000004B8118 "c"
 *   insn=0x00000000004B8118 string=0x00000000004B811C "+<"
 *   insn=0x00000000004B811C string=0x00000000004B8120 "D"
 *   insn=0x00000000004B8120 string=0x00000000004B8124 "A"
 *   insn=0x00000000004B8124 string=0x00000000004B8128 "b"
 *   insn=0x00000000004B812C string=0x00000000004B8130 "B"
 *   insn=0x00000000004B8130 string=0x00000000004B8134 "e"
 *   insn=0x00000000004B8134 string=0x00000000004B8138 "!T8Oc"
 *   insn=0x00000000004B8138 string=0x00000000004B813C "c"
 *   insn=0x00000000004B813C string=0x00000000004B8140 "BT0O"
 *   insn=0x00000000004B8144 string=0x00000000004B8148 "cT(OA"
 *   insn=0x00000000004B8148 string=0x00000000004B814C "A"
 *   insn=0x00000000004B8150 string=0x00000000004B8154 "a"
 *   insn=0x00000000004B8154 string=0x00000000004B8158 "!"
 *   insn=0x00000000004B8160 string=0x00000000004B8164 "*<"
 *   insn=0x00000000004B8164 string=0x00000000004B8168 "+<"
 *   insn=0x00000000004B8168 string=0x00000000004B816C "B"
 *   insn=0x00000000004B816C string=0x00000000004B8170 "*<"
 *   insn=0x00000000004B8170 string=0x00000000004B8174 "c"
 *   insn=0x00000000004B8174 string=0x00000000004B8178 "+<"
 *   insn=0x00000000004B8178 string=0x00000000004B817C "D"
 *   insn=0x00000000004B817C string=0x00000000004B8180 "*<\t"
 *   insn=0x00000000004B8180 string=0x00000000004B8184 "e"
 *   insn=0x00000000004B8184 string=0x00000000004B8188 "+<"
 *   insn=0x00000000004B8188 string=0x00000000004B818C "B"
 *   insn=0x00000000004B818C string=0x00000000004B8190 "*<"
 *   insn=0x00000000004B8190 string=0x00000000004B8194 "C"
 *   insn=0x00000000004B8194 string=0x00000000004B8198 "*<"
 *   insn=0x00000000004B8198 string=0x00000000004B819C "b"
 *   insn=0x00000000004B819C string=0x00000000004B81A0 "+<"
 *   insn=0x00000000004B81A0 string=0x00000000004B81A4 "D"
 *   insn=0x00000000004B81A4 string=0x00000000004B81A8 "*<"
 *   insn=0x00000000004B81A8 string=0x00000000004B81AC "c"
 *   insn=0x00000000004B81AC string=0x00000000004B81B0 "+<"
 *   insn=0x00000000004B81B0 string=0x00000000004B81B4 "E"
 *   insn=0x00000000004B81B4 string=0x00000000004B81B8 "d"
 *   insn=0x00000000004B81B8 string=0x00000000004B81BC "+<"
 *   insn=0x00000000004B81BC string=0x00000000004B81C0 "*<"
 *   insn=0x00000000004B81C0 string=0x00000000004B81C4 "e"
 *   insn=0x00000000004B81C4 string=0x00000000004B81C8 "+<"
 *   insn=0x00000000004B81C8 string=0x00000000004B81CC "B"
 *   insn=0x00000000004B81CC string=0x00000000004B81D0 "*<"
 *   insn=0x00000000004B81D0 string=0x00000000004B81D4 "c"
 *   insn=0x00000000004B81D4 string=0x00000000004B81D8 "+<"
 *   insn=0x00000000004B81D8 string=0x00000000004B81DC "D"
 *   insn=0x00000000004B81DC string=0x00000000004B81E0 "A"
 *   insn=0x00000000004B81E0 string=0x00000000004B81E4 "b"
 *   insn=0x00000000004B81E8 string=0x00000000004B81EC "B"
 *   insn=0x00000000004B81EC string=0x00000000004B81F0 "e"
 *   insn=0x00000000004B81F0 string=0x00000000004B81F4 "!T8Oc"
 *   insn=0x00000000004B81F4 string=0x00000000004B81F8 "c"
 *   insn=0x00000000004B81F8 string=0x00000000004B81FC "BT0O"
 *   insn=0x00000000004B8200 string=0x00000000004B8204 "cT(OA"
 *   insn=0x00000000004B8204 string=0x00000000004B8208 "A"
 *   insn=0x00000000004B820C string=0x00000000004B8210 "a"
 *   insn=0x00000000004B8210 string=0x00000000004B8214 "!"
 *   insn=0x00000000004B821C string=0x00000000004B8220 "*<"
 *   insn=0x00000000004B8220 string=0x00000000004B8224 "+<"
 *   insn=0x00000000004B8224 string=0x00000000004B8228 "B"
 *   insn=0x00000000004B8228 string=0x00000000004B822C "*<"
 *   insn=0x00000000004B822C string=0x00000000004B8230 "c"
 *   insn=0x00000000004B8230 string=0x00000000004B8234 "+<"
 *   insn=0x00000000004B8234 string=0x00000000004B8238 "D"
 *   insn=0x00000000004B8238 string=0x00000000004B823C "*<\t"
 *   insn=0x00000000004B823C string=0x00000000004B8240 "e"
 *   insn=0x00000000004B8240 string=0x00000000004B8244 "+<"
 *   insn=0x00000000004B8244 string=0x00000000004B8248 "B"
 *   insn=0x00000000004B8248 string=0x00000000004B824C "*<"
 *   insn=0x00000000004B824C string=0x00000000004B8250 "C"
 *   insn=0x00000000004B8250 string=0x00000000004B8254 "*<"
 *   insn=0x00000000004B8254 string=0x00000000004B8258 "b"
 *   insn=0x00000000004B8258 string=0x00000000004B825C "+<"
 *   insn=0x00000000004B825C string=0x00000000004B8260 "D"
 *   insn=0x00000000004B8260 string=0x00000000004B8264 "*<"
 *   insn=0x00000000004B8264 string=0x00000000004B8268 "c"
 *   insn=0x00000000004B8268 string=0x00000000004B826C "+<"
 *   insn=0x00000000004B826C string=0x00000000004B8270 "E"
 *   insn=0x00000000004B8270 string=0x00000000004B8274 "d"
 *   insn=0x00000000004B8274 string=0x00000000004B8278 "+<"
 *   insn=0x00000000004B8278 string=0x00000000004B827C "*<"
 *   insn=0x00000000004B827C string=0x00000000004B8280 "e"
 *   insn=0x00000000004B8280 string=0x00000000004B8284 "+<"
 *   insn=0x00000000004B8284 string=0x00000000004B8288 "B"
 *   insn=0x00000000004B8288 string=0x00000000004B828C "*<"
 *   insn=0x00000000004B828C string=0x00000000004B8290 "c"
 *   insn=0x00000000004B8290 string=0x00000000004B8294 "+<"
 *   insn=0x00000000004B8294 string=0x00000000004B8298 "D"
 *   insn=0x00000000004B8298 string=0x00000000004B829C "A"
 *   insn=0x00000000004B829C string=0x00000000004B82A0 "b"
 *   insn=0x00000000004B82A4 string=0x00000000004B82A8 "B"
 *   insn=0x00000000004B82A8 string=0x00000000004B82AC "e"
 *   insn=0x00000000004B82AC string=0x00000000004B82B0 "!T8Oc"
 *   insn=0x00000000004B82B0 string=0x00000000004B82B4 "c"
 *   insn=0x00000000004B82B4 string=0x00000000004B82B8 "BT0O"
 *   insn=0x00000000004B82BC string=0x00000000004B82C0 "cT(OA"
 *   insn=0x00000000004B82C0 string=0x00000000004B82C4 "A"
 *   insn=0x00000000004B82C8 string=0x00000000004B82CC "a"
 *   insn=0x00000000004B82CC string=0x00000000004B82D0 "!"
 *   insn=0x00000000004B82D8 string=0x00000000004B82DC "+<"
 *   insn=0x00000000004B82DC string=0x00000000004B82E0 "*<"
 *   insn=0x00000000004B82E0 string=0x00000000004B82E4 "c"
 *   insn=0x00000000004B82E4 string=0x00000000004B82E8 "+<"
 *   insn=0x00000000004B82E8 string=0x00000000004B82EC "B"
 *   insn=0x00000000004B82EC string=0x00000000004B82F0 "e"
 *   insn=0x00000000004B82F0 string=0x00000000004B82F4 "+<\t"
 *   insn=0x00000000004B82F4 string=0x00000000004B82F8 "*<"
 *   insn=0x00000000004B82F8 string=0x00000000004B82FC "b"
 *   insn=0x00000000004B82FC string=0x00000000004B8300 "+<"
 *   insn=0x00000000004B8300 string=0x00000000004B8304 "D"
 *   insn=0x00000000004B8304 string=0x00000000004B8308 "c"
 *   insn=0x00000000004B8308 string=0x00000000004B830C "+<"
 *   insn=0x00000000004B830C string=0x00000000004B8310 "d"
 *   insn=0x00000000004B8310 string=0x00000000004B8314 "+<"
 *   insn=0x00000000004B8314 string=0x00000000004B8318 "e"
 *   insn=0x00000000004B8318 string=0x00000000004B831C "+<"
 *   insn=0x00000000004B831C string=0x00000000004B8320 "b"
 *   insn=0x00000000004B8320 string=0x00000000004B8324 "+<"
 *   insn=0x00000000004B8324 string=0x00000000004B8328 "c"
 *   insn=0x00000000004B8328 string=0x00000000004B832C "+<"
 *   insn=0x00000000004B832C string=0x00000000004B8330 "d"
 *   insn=0x00000000004B8330 string=0x00000000004B8334 "+<"
 *   insn=0x00000000004B8334 string=0x00000000004B8338 "e"
 *   insn=0x00000000004B8338 string=0x00000000004B833C "+<"
 *   insn=0x00000000004B833C string=0x00000000004B8340 "b"
 *   insn=0x00000000004B8340 string=0x00000000004B8344 "+<"
 *   insn=0x00000000004B8344 string=0x00000000004B8348 "c"
 *   insn=0x00000000004B8348 string=0x00000000004B834C "+<"
 *   insn=0x00000000004B834C string=0x00000000004B8350 "d"
 *   insn=0x00000000004B8350 string=0x00000000004B8354 "+<"
 *   insn=0x00000000004B8354 string=0x00000000004B8358 "A"
 *   insn=0x00000000004B8358 string=0x00000000004B835C "b"
 *   insn=0x00000000004B8360 string=0x00000000004B8364 "B"
 *   insn=0x00000000004B8364 string=0x00000000004B8368 "e"
 *   insn=0x00000000004B8368 string=0x00000000004B836C "!T8Oc"
 *   insn=0x00000000004B836C string=0x00000000004B8370 "c"
 *   insn=0x00000000004B8370 string=0x00000000004B8374 "BT0O"
 *   insn=0x00000000004B8378 string=0x00000000004B837C "cT(OA"
 *   insn=0x00000000004B837C string=0x00000000004B8380 "A"
 *   insn=0x00000000004B8384 string=0x00000000004B8388 "a"
 *   insn=0x00000000004B838C string=0x00000000004B8390 "K"
 *   insn=0x00000000004B8390 string=0x00000000004B8394 " "
 *   insn=0x00000000004B8398 string=0x00000000004B839C "l"
 *   insn=0x00000000004B83A8 string=0x00000000004B83AC "Pii"
 *   insn=0x00000000004B83AC string=0x00000000004B83B0 ")"
 *   insn=0x00000000004B83C0 string=0x00000000004B83C4 "?"
 *   insn=0x00000000004B83CC string=0x00000000004B83D0 "\t(@)0A)"
 *   insn=0x00000000004B83D0 string=0x00000000004B83D4 "0A)"
 *   insn=0x00000000004B83D4 string=0x00000000004B83D8 ""
 *   insn=0x00000000004B8408 string=0x00000000004B840C "#"
 *   insn=0x00000000004B840C string=0x00000000004B8410 "$"
 *   insn=0x00000000004B8414 string=0x00000000004B8418 "$3"
 *   insn=0x00000000004B8420 string=0x00000000004B8474 "El"
 *   insn=0x00000000004B8428 string=0x00000000004B842C "#"
 *   insn=0x00000000004B842C string=0x00000000004B8430 "$t"
 *   insn=0x00000000004B8430 string=0x00000000004B8434 "c"
 *   insn=0x00000000004B8434 string=0x00000000004B8438 "$"
 *   insn=0x00000000004B8440 string=0x00000000004B8444 ""
 *   insn=0x00000000004B8444 string=0x00000000004B8448 "#"
 *   insn=0x00000000004B8444 string=0x00000000004B8464 "#"
 *   insn=0x00000000004B8448 string=0x00000000004B844C "$"
 *   insn=0x00000000004B844C string=0x00000000004B8450 "c"
 *   insn=0x00000000004B8450 string=0x00000000004B8454 "c"
 *   insn=0x00000000004B8468 string=0x00000000004B846C "c"
 *   insn=0x00000000004B846C string=0x00000000004B8470 "DL"
 *   insn=0x00000000004B8490 string=0x00000000004B8494 "C\n"
 *   insn=0x00000000004B84A8 string=0x00000000004B84AC "J"
 *   insn=0x00000000004B84AC string=0x00000000004B84B0 "k"
 *   insn=0x00000000004B84B0 string=0x00000000004B84B4 ","
 *   insn=0x00000000004B84B4 string=0x00000000004B84B8 "-"
 *   insn=0x00000000004B84B8 string=0x00000000004B84BC "\t("
 *   insn=0x00000000004B84BC string=0x00000000004B84C0 "0"
 *   insn=0x00000000004B84C0 string=0x00000000004B84C4 ""
 *   insn=0x00000000004B84C4 string=0x00000000004B84C8 ""
 *   insn=0x00000000004B84D4 string=0x00000000004B84E8 "z"
 *   insn=0x00000000004B84E8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall boost::uuids::detail::sha1::process_block(int *this)
{
  int8x16_t v1; // q0
  __int64 v2; // x9
  __int128 v3; // q1
  uint16x4_t v4; // d2
  uint16x4_t v5; // d3
  uint16x4_t v6; // d4
  uint16x4_t v7; // d5
  __int128 v8; // q1
  __int128 v9; // q1
  __int128 v10; // q1
  char *v11; // x12
  int v12; // w13
  int v13; // w14
  int v14; // w15
  int v15; // w16
  unsigned __int64 v16; // t2
  int v17; // w10
  int v18; // w11
  int v19; // w12
  int v20; // w13
  unsigned __int64 v21; // x14
  int v22; // w4
  int v23; // w16
  int v24; // w3
  int v25; // w18
  int v26; // w5
  int v27; // w2
  int v28; // w1
  int v29; // w17
  int v30; // w3
  int v31; // w4
  unsigned __int64 v32; // t2
  int v33; // w6
  _OWORD v34[2]; // [xsp+0h] [xbp-160h]
  _OWORD v35[18]; // [xsp+20h] [xbp-140h] BYREF
  __int64 v36; // [xsp+148h] [xbp-18h]

  v1.n128_u64[0] = 0xFF000000FFLL;
  v1.n128_u64[1] = 0xFF000000FFLL;
  v2 = 0;
  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_OWORD *)(this + 5);
  v4.n64_u16[0] = (unsigned __int8)v3;
  v5.n64_u16[0] = BYTE1(v3);
  v6.n64_u16[0] = BYTE2(v3);
  v7.n64_u16[0] = BYTE3(v3);
  v4.n64_u16[1] = BYTE4(v3);
  v5.n64_u16[1] = BYTE5(v3);
  v4.n64_u16[2] = BYTE8(v3);
  v6.n64_u16[1] = BYTE6(v3);
  v5.n64_u16[2] = BYTE9(v3);
  v7.n64_u16[1] = BYTE7(v3);
  v6.n64_u16[2] = BYTE10(v3);
  v7.n64_u16[2] = BYTE11(v3);
  v4.n64_u16[3] = BYTE12(v3);
  v5.n64_u16[3] = BYTE13(v3);
  v6.n64_u16[3] = BYTE14(v3);
  v7.n64_u16[3] = HIBYTE(v3);
  v34[0] = vorrq_s8(
             vorrq_s8(
               vshlq_n_s32(vandq_s8(vmovl_u16(v6), v1), 8u),
               vorrq_s8(vshlq_n_s32(vandq_s8(vmovl_u16(v5), v1), 0x10u), vshlq_n_s32(vmovl_u16(v4), 0x18u))),
             vandq_s8(vmovl_u16(v7), v1));
  v8 = *(_OWORD *)(this + 9);
  v4.n64_u16[0] = (unsigned __int8)v8;
  v5.n64_u16[0] = BYTE1(v8);
  v6.n64_u16[0] = BYTE2(v8);
  v7.n64_u16[0] = BYTE3(v8);
  v4.n64_u16[1] = BYTE4(v8);
  v5.n64_u16[1] = BYTE5(v8);
  v4.n64_u16[2] = BYTE8(v8);
  v6.n64_u16[1] = BYTE6(v8);
  v5.n64_u16[2] = BYTE9(v8);
  v7.n64_u16[1] = BYTE7(v8);
  v6.n64_u16[2] = BYTE10(v8);
  v7.n64_u16[2] = BYTE11(v8);
  v4.n64_u16[3] = BYTE12(v8);
  v5.n64_u16[3] = BYTE13(v8);
  v6.n64_u16[3] = BYTE14(v8);
  v7.n64_u16[3] = HIBYTE(v8);
  v34[1] = vorrq_s8(
             vorrq_s8(
               vshlq_n_s32(vandq_s8(vmovl_u16(v6), v1), 8u),
               vorrq_s8(vshlq_n_s32(vandq_s8(vmovl_u16(v5), v1), 0x10u), vshlq_n_s32(vmovl_u16(v4), 0x18u))),
             vandq_s8(vmovl_u16(v7), v1));
  v9 = *(_OWORD *)(this + 13);
  v4.n64_u16[0] = (unsigned __int8)v9;
  v5.n64_u16[0] = BYTE1(v9);
  v6.n64_u16[0] = BYTE2(v9);
  v7.n64_u16[0] = BYTE3(v9);
  v4.n64_u16[1] = BYTE4(v9);
  v5.n64_u16[1] = BYTE5(v9);
  v4.n64_u16[2] = BYTE8(v9);
  v6.n64_u16[1] = BYTE6(v9);
  v5.n64_u16[2] = BYTE9(v9);
  v7.n64_u16[1] = BYTE7(v9);
  v6.n64_u16[2] = BYTE10(v9);
  v7.n64_u16[2] = BYTE11(v9);
  v4.n64_u16[3] = BYTE12(v9);
  v5.n64_u16[3] = BYTE13(v9);
  v6.n64_u16[3] = BYTE14(v9);
  v7.n64_u16[3] = HIBYTE(v9);
  v35[0] = vorrq_s8(
             vorrq_s8(
               vshlq_n_s32(vandq_s8(vmovl_u16(v6), v1), 8u),
               vorrq_s8(vshlq_n_s32(vandq_s8(vmovl_u16(v5), v1), 0x10u), vshlq_n_s32(vmovl_u16(v4), 0x18u))),
             vandq_s8(vmovl_u16(v7), v1));
  v10 = *(_OWORD *)(this + 17);
  v5.n64_u16[0] = BYTE1(v10);
  v4.n64_u16[0] = (unsigned __int8)v10;
  v7.n64_u16[0] = BYTE3(v10);
  v4.n64_u16[1] = BYTE4(v10);
  v6.n64_u16[0] = BYTE2(v10);
  v5.n64_u16[1] = BYTE5(v10);
  v6.n64_u16[1] = BYTE6(v10);
  v7.n64_u16[1] = BYTE7(v10);
  v4.n64_u16[2] = BYTE8(v10);
  v5.n64_u16[2] = BYTE9(v10);
  v6.n64_u16[2] = BYTE10(v10);
  v7.n64_u16[2] = BYTE11(v10);
  v4.n64_u16[3] = BYTE12(v10);
  v5.n64_u16[3] = BYTE13(v10);
  v6.n64_u16[3] = BYTE14(v10);
  v7.n64_u16[3] = HIBYTE(v10);
  v35[1] = vorrq_s8(
             vorrq_s8(
               vshlq_n_s32(vandq_s8(vmovl_u16(v6), v1), 8u),
               vorrq_s8(vshlq_n_s32(vandq_s8(vmovl_u16(v5), v1), 0x10u), vshlq_n_s32(vmovl_u16(v4), 0x18u))),
             vandq_s8(vmovl_u16(v7), v1));
  do
  {
    v11 = (char *)v35 + v2;
    v12 = *(_DWORD *)((char *)&v35[1] + v2 + 4);
    v13 = *(_DWORD *)((char *)v35 + v2);
    v14 = *(_DWORD *)((char *)v34 + v2 + 8);
    v15 = *(_DWORD *)((char *)v34 + v2);
    v2 += 4;
    HIDWORD(v16) = v13 ^ v12 ^ v14 ^ v15;
    LODWORD(v16) = HIDWORD(v16);
    *((_DWORD *)v11 + 8) = v16 >> 31;
  }
  while ( v2 != 256 );
  v17 = this[1];
  v18 = this[2];
  v19 = this[3];
  v20 = this[4];
  v21 = 0;
  v22 = v19;
  v23 = v20;
  v24 = v18;
  v25 = v17;
  v26 = *this;
  do
  {
    v27 = v26;
    v28 = v24;
    v29 = v22;
    if ( v21 > 0x13 )
    {
      if ( v21 > 0x27 )
      {
        if ( v21 > 0x3B )
        {
          v30 = v24 ^ v25 ^ v22;
          v31 = -899497514;
        }
        else
        {
          v30 = (v22 | v24) & v25 | v22 & v24;
          v31 = -1894007588;
        }
      }
      else
      {
        v30 = v24 ^ v25 ^ v22;
        v31 = 1859775393;
      }
    }
    else
    {
      v30 = v22 & ~v25 | v24 & v25;
      v31 = 1518500249;
    }
    HIDWORD(v32) = v26;
    LODWORD(v32) = v26;
    v33 = *((_DWORD *)v34 + v21++);
    v26 = v23 + (v32 >> 27) + v30 + v31 + v33;
    HIDWORD(v32) = v25;
    LODWORD(v32) = v25;
    v24 = v32 >> 2;
    v23 = v29;
    v22 = v28;
    v25 = v27;
  }
  while ( v21 != 80 );
  *this += v26;
  this[1] = v27 + v17;
  this[2] = v24 + v18;
  this[3] = v28 + v19;
  this[4] = v29 + v20;
  return this;
}

