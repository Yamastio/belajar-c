
START
    INPUT orderPrice

    IF orderPrice < 100000
      SET deliveryCharge = 10000
    ELSE
      SET deliveryCharge = 0
    ENDIF
    SET subtotal = deliveryCharge + orderPrice
    OUTPUT subtotal
END
