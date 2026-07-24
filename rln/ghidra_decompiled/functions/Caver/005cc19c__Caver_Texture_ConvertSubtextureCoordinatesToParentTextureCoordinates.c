/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc19c
 * Function: Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates
 * Signature: undefined __cdecl ConvertSubtextureCoordinatesToParentTextureCoordinates(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&) */

void Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Vector2 *param_1)

{
  undefined8 *in_x1;
  undefined8 *in_x8;
  
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
                    (float)((ulong)*in_x1 >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x5c) +
                    (float)*in_x1 * (float)*(undefined8 *)(param_1 + 100));
  return;
}


