

double per_sq(double width, double height) {
    
    if (width < 0 || height < 0) {
        return 0;
    }

    return 2 * (width + height);
}
