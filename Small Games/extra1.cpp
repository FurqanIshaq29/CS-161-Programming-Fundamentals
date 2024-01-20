void bulletCollisionWithEnemyRight()

{
    for (int x = 0; x < bulletCountRight; x++)
    {
        if (bulletRightX[x] + 1 == e1nemyX && (bulletRightY[x] == e1nemyY || bulletRightY[x] == e1nemyY + 1))
        {
            addScore();
            eraseBulletRight(bulletRightX[x], bulletRightY[x]);
            removeBulletfromArrayRight(x);
        }

        if (bulletRightX[x] + 1 == e2nemyX && (bulletRightY[x] == e2nemyY || bulletRightY[x] == e2nemyY + 1))
        {
            addScore();
            eraseBulletRight(bulletRightX[x], bulletRightY[x]);
            removeBulletfromArrayRight(x);
        }
        if (bulletRightX[x] + 1 == e3nemyX && (bulletRightY[x] == e3nemyY || bulletRightY[x] == e3nemyY + 1))
        {
            addScore();
            eraseBulletRight(bulletRightX[x], bulletRightY[x]);
            removeBulletfromArrayRight(x);
        }
        if (bulletRightX[x] + 1 == e4nemyX && (bulletRightY[x] == e4nemyY || bulletRightY[x] == e4nemyY + 1))
        {
            addScore();
            eraseBulletRight(bulletRightX[x], bulletRightY[x]);
            removeBulletfromArrayRight(x);
        }
    }