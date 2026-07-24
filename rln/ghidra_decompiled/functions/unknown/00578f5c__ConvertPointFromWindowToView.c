/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578f5c
 * Function: ConvertPointFromWindowToView
 * Signature: undefined __cdecl ConvertPointFromWindowToView(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* ConvertPointFromWindowToView(Caver::Vector2 const&) */

void ConvertPointFromWindowToView(Vector2 *param_1)

{
  undefined8 *in_x8;
  
  *in_x8 = CONCAT44(((float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                    (float)((ulong)DAT_007e9c90 >> 0x20)) / DAT_007e9ca8,
                    ((float)*(undefined8 *)param_1 - (float)DAT_007e9c90) / DAT_007e9ca8);
  return;
}


