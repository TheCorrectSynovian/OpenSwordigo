/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2760
 * Function: Caver::Shape::Bounds
 * Signature: undefined __cdecl Bounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Shape::Bounds() const */

void Caver::Shape::Bounds(void)

{
  int iVar1;
  int *in_x0;
  undefined8 *in_x8;
  undefined8 uVar2;
  
  iVar1 = *in_x0;
  if (iVar1 == 3) {
    Polygon::Bounds();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      uVar2 = **(undefined8 **)(in_x0 + 2);
      in_x8[1] = (*(undefined8 **)(in_x0 + 2))[1];
      *in_x8 = uVar2;
      return;
    }
    *in_x8 = 0;
    in_x8[1] = 0;
    return;
  }
  Circle::Bounds();
  return;
}


