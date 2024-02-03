def Band():
    import input_score
    grade = (input_score.math + input_score.physic + input_score.english) / 3
    print('\nPhan loai hoc luc: ', end='')

    if (grade < 4.9):
        print('Trung Binh')
    elif (grade < 7.9):
        print('Kha')
    elif (grade <= 10):
        print('Gioi')