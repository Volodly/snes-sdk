
;������������������������������������������������������������������������������
; a small example showing the wla-z80 syntax
; written by ville helin <vhelin@cc.hut.fi> in 1998-2000
;������������������������������������������������������������������������������

;������������������������������������������������������������������������������
; includes
;������������������������������������������������������������������������������

.INCLUDE "defines.i"

;������������������������������������������������������������������������������
; standard stuff?
;������������������������������������������������������������������������������

.BANK 0 SLOT 0
.ORG $100

	JP	MAIN
